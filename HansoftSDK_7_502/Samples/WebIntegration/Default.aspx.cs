#if (PLATFORM_X64)
extern alias HPMSdkx64;
using HPMSdkx64::HPMSdk;
#else
extern alias HPMSdkx86;
using HPMSdkx86::HPMSdk;
#endif

using System;
using System.Configuration;
using System.Data;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Text.RegularExpressions;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web.Security;

using AjaxControlToolkit;

using HPMInt8 = System.SByte;
using HPMUInt8 = System.Byte;
using HPMInt16 = System.Int16;
using HPMUInt16 = System.UInt16;
using HPMInt32 = System.Int32;
using HPMUInt32 = System.UInt32;
using HPMInt64 = System.Int64;
using HPMUInt64 = System.UInt64;
using HPMError = System.Int32;
using HPMString = System.String;

namespace HansoftSDKSample_WebIntegration
{
    /// <summary>
    /// Displays the data from Hansoft in a GridView per project. Data from Hansoft is cached in a DataTable per Hansoft project. In a real application a user defined data model should be used - DataTable is used for simplicity.
    /// </summary>
    public partial class _Default : System.Web.UI.Page
    {
        // The virtual session used to call Hansoft. This is a handle into the SDK session pool. The number of sessions in the pool is set in Web.config.
        protected HPMSdkSession m_VirtSession;
        // The unique ID of the authenticated Hansoft user.
        protected HPMUniqueID m_ResourceID;
        // The find context that is created if a report is chosen is the report dropdown list.
        Dictionary<string, HPMFindContextData> m_FindContexts;

        // Dummy ID for no user.
        protected HPMUniqueID m_NoUserID;
        protected HPMUntranslatedString m_NoMessage = new HPMUntranslatedString();
        protected HPMUntranslatedString m_UpdatedFromWeb;

        // used to convert time from HPM to C# and vice versa
        const long m_BaseTicks = 621355968000000000; // the epoch
        const long m_TickResolution = 10000000;

        protected void Page_Load(object sender, EventArgs e)
        {
            // The ID of the authenticated user
            FormsIdentity ID = (FormsIdentity)HttpContext.Current.User.Identity;
            m_ResourceID = new HPMUniqueID(Convert.ToInt32(ID.Name));
            m_NoUserID = new HPMUniqueID(-1);
            // Find context is empty but can be set by choosing a report or providing a search string
            m_FindContexts = new Dictionary<string, HPMFindContextData>();
            ErrorLabel.Visible = false;

            try
            {
                InitHansoftVirtualSession();
                m_UpdatedFromWeb = m_VirtSession.LocalizationCreateUntranslatedStringFromString("Updated from web integration sample");
                AddProjectControls();

                // update info contains info from callbacks about changed Hansoft elements
                HPMUpdateInfo update = Session["updateinfo"] as HPMUpdateInfo;

                if (!IsPostBack || update.FullUpdate)
                {
                    AddData();
                    update.FullUpdate = false;
                    // retain selected tab between postbacks (doesn't work for the first tab - TabContainer bug?) Uncomment it if you want to experiment with it
                    //if (Session["ActiveTabIndex"] != null)
                    //{
                    //    int storedIndex = (int)Session["ActiveTabIndex"];
                    //    TabContainer projectTabs = Page.FindControl("ProjectTabs") as TabContainer;
                    //    if (storedIndex <= projectTabs.Tabs.Count)
                    //        projectTabs.ActiveTabIndex = storedIndex;
                    //}
                    BindDataSources();
                }


            }
            catch (HPMSdkException error)
            {
                SetErrorMessage("An error occurred when communicating with the Hansoft server.", error.ErrorAsStr());
            }
            catch (HPMSdkManagedException error)
            {
                SetErrorMessage("An error occurred when communicating with the Hansoft server.", error.ErrorAsStr());
            }
        }

        private void InitHansoftVirtualSession()
        {
            HPMWISdkSession session = HPMWISdkSession.Instance;
            HPMSdkSession sdkSession = session.Session;
            m_VirtSession = HPMSdkSession.SessionOpenVirtual(ref sdkSession);
        }

        private void SetErrorMessage(string error, string cause)
        {
            ErrorLabel.Text = error + " " + cause;
            ErrorLabel.Visible = true;
        }

        private void BindDataSources()
        {
            List<string> projectlist = GetProjectList();
            if (projectlist != null)
            {
                foreach (string project in projectlist)
                {
                    // one DataTable per project. Could add lazy binding and bind on tab change events to speed things up.
                    DataTable dt = GetDataSource(project);
                    if (dt != null)
                    {
                        BindGrid(project, dt);
                    }
                    Dictionary<string, string> dict = GetReportDataSource(project);
                    if (dict != null)
                    {
                        BindReports(project);
                    }

                }
            }
        }

        /// <summary>
        /// Handles sorting events when user clicks on GridView header. The sorting does not use the logic that Hansoft uses to sort the columns. This logic could be exposed in a future version of the SDK.
        /// </summary>
        protected void gView_Sorting(object sender, GridViewSortEventArgs e)
        {
            GridView gView = sender as GridView;
            string project = GetProject(gView);
            //Retrieve the table from the session object.
            DataTable dt = GetDataSource(project);

            if (dt != null)
            {
                //Sort the data.
                dt.DefaultView.Sort = e.SortExpression + " " + GetSortDirection(e.SortExpression, project);
                gView.EditIndex = -1;
                gView.SelectedIndex = -1;
                ShowNoItemSelectedText(project, true, "");
                BindGrid(project, dt);
            }

        }


        private string GetSortDirection(string column, string projectID)
        {

            // By default, set the sort direction to ascending.
            string sortDirection = "ASC";

            // Retrieve the last column that was sorted.
            string sortExpression = ViewState["SortExpression" + projectID] as string;

            if (sortExpression != null)
            {
                // Check if the same column is being sorted.
                // Otherwise, the default value can be returned.
                if (sortExpression == column)
                {
                    string lastDirection = ViewState["SortDirection" + projectID] as string;
                    if ((lastDirection != null) && (lastDirection == "ASC"))
                    {
                        sortDirection = "DESC";
                    }
                }
            }

            // Save new values in ViewState.
            ViewState["SortDirection" + projectID] = sortDirection;
            ViewState["SortExpression" + projectID] = column;

            return sortDirection;
        }

        /// <summary>
        /// Handles the tick event from the client side timer that updates the UpdatePanel. This is needed since we can't handle the callbacks in the server side code behind.
        /// </summary>
        protected void Timer_Tick(object sender, EventArgs args)
        {
            HPMUpdateInfo update = Session["updateinfo"] as HPMUpdateInfo;

            if (update.UpdatedTasks.Count > 0)
            {
                foreach (KeyValuePair<Int32, HPMUniqueID> keyValue in update.UpdatedTasks)
                {
                    HPMUniqueID taskID = keyValue.Value;
                    HPMUniqueID taskRefID = m_VirtSession.TaskGetMainReference(taskID);
                    if (update.CreatedTasks.ContainsKey(taskRefID.m_ID) || update.DeletedTasks.ContainsKey(taskRefID.m_ID))
                        continue;
                    HPMUniqueID projectID = m_VirtSession.TaskGetContainer(taskID);
                    string project = Convert.ToString(projectID.m_ID);
                    GridView gView = GetGridView(project);
                    DataTable dt = GetDataSource(project);
                    try
                    {
                        DataRow drow = dt.Rows.Find(taskID.m_ID);
                        List<HPMWIColumn> columns = GetColumns(project);
                        HPMUniqueID selectedID = new HPMUniqueID(-1);
                        if (gView.SelectedIndex != -1)
                        {
                            DataKey selectedKey = gView.SelectedDataKey;
                            selectedID = new HPMUniqueID(Convert.ToInt32(selectedKey.Value));
                        }
                        foreach (HPMWIColumn column in columns)
                        {
                            UpdateRow(taskID, projectID, column, drow, true);
                        }
                        if (selectedID == taskID)
                            MultilineTabsSetText(project, drow, true);
                        BindGrid(project, dt);
                    }
                    catch (MissingPrimaryKeyException)
                    {
                        SetErrorMessage("Task " + taskID + " does not exist in table.", "");
                    }
                }
            }
            if (update.DeletedTasks.Count > 0)
            {
                foreach (KeyValuePair<Int32, HPMUniqueID> keyValue in update.DeletedTasks)
                {
                    HPMUniqueID taskID = keyValue.Value;
                    HPMUniqueID projectID = m_VirtSession.TaskGetContainer(taskID);
                    string project = Convert.ToString(projectID.m_ID);
                    DataTable dt = GetDataSource(project);
                    try
                    {
                        DataRow drow = dt.Rows.Find(taskID.m_ID);
                        DeleteTask(taskID, drow);
                        BindGrid(project, dt);
                    }
                    catch (MissingPrimaryKeyException)
                    {
                        SetErrorMessage("Task " + taskID + " does not exist in table.", "");
                    }
                }
            }
            if (update.CreatedTasks.Count > 0)
            {

                foreach (KeyValuePair<Int32, HPMUniqueID> keyValue in update.CreatedTasks)
                {
                    HPMUniqueID taskRefID = keyValue.Value;
                    HPMUniqueID taskID = m_VirtSession.TaskRefGetTask(taskRefID);
                    HPMUniqueID projectID = m_VirtSession.TaskGetContainer(taskID);
                    string project = Convert.ToString(projectID.m_ID);
                    DataTable dt = GetDataSource(project);
                    AddTask(taskRefID, projectID, project, dt, false);
                    SetDataSource(dt, project);
                    BindGrid(project, dt);
                }

            }
            Session["updateinfo"] = new HPMUpdateInfo();
        }

        /// <summary>
        /// Handles button click event from "Report new bug" button. Creates new bug.
        /// </summary>
        protected void button_AddBugClick(object sender, EventArgs args)
        {
            Button addButton = sender as Button;
            string project = addButton.ID.Substring("ReportBugButton".Length);
            CreateTask(project);
        }

        /// <summary>
        /// Handles row data bound events to be able to set the width of a GridView column.
        /// </summary>
        protected void gView_RowDataBound(object sender, GridViewRowEventArgs e)
        {
            GridView gView = sender as GridView;
            DataRowView drv = e.Row.DataItem as DataRowView;

            if (e.Row.RowType == DataControlRowType.DataRow)
            {
                if (drv != null)
                {
                    for (int i = 0; i < gView.Columns.Count; ++i)
                    {
                        if (gView.Columns[i] is CommandField)
                            continue;


                        if (gView.Columns[i] is TemplateField)
                        {
                            TemplateField field = gView.Columns[i] as TemplateField;
                            HPMGridViewTemplate templ = field.ItemTemplate as HPMGridViewTemplate;
                            // for drowdowns the column width is set on creation of field
                            if (templ.Type == HPMGridViewTemplateType.DropDownList)
                                continue;
                        }

                        String catName = drv[gView.Columns[i].AccessibleHeaderText].ToString();

                        int catNameLen = catName.Length * 30;
                        if (catNameLen > gView.Columns[i].ItemStyle.Width.Value)
                        {
                            gView.Columns[i].ItemStyle.Width = catNameLen;
                            gView.Columns[i].ItemStyle.Wrap = false;
                        }
                    }

                }
            }
        }

        /// <summary>
        /// Handles event when row edit is canceled. 
        /// </summary>
        protected void gView_CancelingRowEdit(object sender, GridViewCancelEditEventArgs e)
        {
            GridView gView = sender as GridView;
            //Reset the edit index.
            gView.EditIndex = -1;
            gView.SelectedIndex = -1;
            string project = GetProject(gView);
            ShowNoItemSelectedText(project, true, "");

            DataTable dt = GetDataSource(project);
            Int32 id = Convert.ToInt32(gView.DataKeys[e.RowIndex].Value);
            DataRow drow = dt.Rows.Find(id);

            MultilineTabsReadOnly(true, project);
            MultilineTabsSetText(project, drow, false);

            HPMUniqueID taskID = new HPMUniqueID(id);
            HPMUniqueID projectID = new HPMUniqueID(Convert.ToInt32(project));

            List<HPMWIColumn> columns = GetColumns(project);
            foreach (HPMWIColumn column in columns)
            {
                UpdateRow(taskID, projectID, column, drow, true);
            }
            //Bind data to the GridView control.
            BindGrid(project, dt);
        }

        /// <summary>
        /// Handles event when row is set in edit mode.
        /// </summary>
        protected void gView_RowEdit(object sender, GridViewEditEventArgs e)
        {
            GridView gView = sender as GridView;
            string project = GetProject(gView);
            DataTable dt = GetDataSource(project);

            Int32 ID = Convert.ToInt32(gView.DataKeys[e.NewEditIndex].Value);
            DataRow drow = dt.Rows.Find(ID);
            string itemName = drow[Convert.ToString((uint)EHPMProjectDefaultColumn.ItemName)] as string;
            HPMUniqueID taskID = new HPMUniqueID(ID);

            gView.EditIndex = e.NewEditIndex;
            gView.SelectedIndex = e.NewEditIndex;
            itemName = (itemName.Length > 0) ? itemName : Convert.ToString(ID);
            ShowNoItemSelectedText(project, false, "Editing " + itemName);

            HPMUniqueID projectID = new HPMUniqueID(Convert.ToInt32(project));

            MultilineTabsReadOnly(false, project);
            MultilineTabsSetText(project, drow, true);

            List<HPMWIColumn> columns = GetColumns(project);
            foreach (HPMWIColumn column in columns)
            {
                UpdateRow(taskID, projectID, column, drow, false);
            }


            //Bind data to the GridView control.
            BindGrid(project, dt);
            // special hack since multiple selection doesn't work in data binding event handler in HPMGridViewTemplate
            GridViewRow row = gView.Rows[e.NewEditIndex];
            for (int i = 0; i < gView.Columns.Count; ++i)
            {
                if (row.Cells[i].Controls.Count == 0)
                    continue;
                if (gView.Columns[i] is CommandField)
                    continue;
                string coltype = gView.Columns[i].AccessibleHeaderText;
                if (row.Cells[i].Controls[0] is TextBox)
                    continue;
                if (row.Cells[i].Controls[0] is DropDownList)
                    continue;
                else if (row.Cells[i].Controls[0] is ListBox)
                {
                    ListBox lb = (ListBox)row.Cells[i].Controls[0];
                    string stored = drow[coltype] as string;
                    string[] users = stored.Split(new string[] { ";" }, StringSplitOptions.None);
                    foreach (string user in users)
                    {
                        ListItem item = lb.Items.FindByText(user.Trim());

                        if (item != null)
                        {
                            item.Selected = true;
                        }
                    }
                }
            }
        }

        /// <summary>
        /// Handles event when row edit is done and values should be saved to Hansoft.
        /// </summary>
        protected void gView_RowUpdating(object sender, GridViewUpdateEventArgs e)
        {
            GridView gView = sender as GridView;
            //Retrieve the table from the session object.
            string project = GetProject(gView);
            HPMUniqueID projectID = new HPMUniqueID(Convert.ToInt32(project));
            DataTable dt = GetDataSource(project);
            bool isMultiselect;

            //Update the values.
            GridViewRow row = gView.Rows[e.RowIndex];
            Int32 ID = Convert.ToInt32(gView.DataKeys[e.RowIndex].Value);
            DataRow drow = dt.Rows.Find(ID);
            MultilineTabsReadOnly(true, project);
            HPMUniqueID taskID = new HPMUniqueID(ID);
            for (int i = 0; i < gView.Columns.Count; ++i)
            {
                isMultiselect = false;
                if (gView.Columns[i] is CommandField)
                    continue;
                if (gView.Columns[i] is BoundField)
                {
                    BoundField bf = (BoundField)gView.Columns[i];
                    if (bf.ReadOnly || !bf.Visible)
                        continue;
                }
                string value = "";
                string changed = "";
                List<string> multiselected = new List<string>();
                List<string> multiselectedNames = new List<string>();

                string colType = gView.Columns[i].AccessibleHeaderText;
                if (row.Cells[i].Controls[0] is TextBox)
                {
                    value = ((TextBox)(row.Cells[i].Controls[0])).Text;
                    changed = value;
                }
                else if (row.Cells[i].Controls[0] is DropDownList)
                {
                    TemplateField tf = (TemplateField)gView.Columns[i];
                    HPMGridViewTemplate templ = (HPMGridViewTemplate)tf.EditItemTemplate;

                    if (templ.IsNumeric)
                    {
                        value = ((DropDownList)(row.Cells[i].Controls[0])).SelectedValue;
                        changed = value;
                    }
                    else
                    {
                        value = ((DropDownList)(row.Cells[i].Controls[0])).SelectedItem.Text;
                        changed = ((DropDownList)(row.Cells[i].Controls[0])).SelectedValue;
                    }

                    if (((DropDownList)(row.Cells[i].Controls[0])).SelectedIndex == 0)
                    {
                        if (Convert.ToUInt32(colType) != (uint)EHPMProjectDefaultColumn.BugPriority)
                            value = "";
                    }
                }
                else if (row.Cells[i].Controls[0] is ListBox)
                {
                    ListBox lb = (ListBox)row.Cells[i].Controls[0];

                    foreach (ListItem item in lb.Items)
                    {
                        if (item.Selected)
                        {
                            if (item.Value == "0" && lb.Items.Count > 1)
                                continue;
                            multiselected.Add(item.Value);
                            multiselectedNames.Add(item.Text);
                        }
                    }
                    isMultiselect = true;
                }
                if (isMultiselect)
                {
                    string stored = drow[colType] as string;
                    string[] names = stored.Split(new string[] { ";" }, StringSplitOptions.RemoveEmptyEntries);
                    if (names.Length != multiselectedNames.Count)
                    {
                        UpdateColumn(projectID, taskID, Convert.ToUInt32(colType), changed, multiselected);
                    }
                    else
                    {
                        foreach (string name in names)
                        {
                            int index = multiselectedNames.IndexOf(name.Trim());
                            if (index > -1)
                                multiselectedNames.RemoveAt(index);
                        }
                        if (multiselectedNames.Count > 0)
                            UpdateColumn(projectID, taskID, Convert.ToUInt32(colType), changed, multiselected);
                    }

                }
                else if (Convert.ToString(drow[colType]) != value)
                    UpdateColumn(projectID, taskID, Convert.ToUInt32(colType), changed, multiselected);
            }

            // check if anything has been updated in multi line fields
            TabContainer multilineTabs = GetMultilineTabContainer(project);
            foreach (TabPanel panel in multilineTabs.Tabs)
            {
                string panelID = panel.ID;

                TextBox textbox = (Convert.ToUInt32(panelID) == (uint)EHPMProjectDefaultColumn.Comments) ? (TextBox)panel.FindControl("mlboxc" + panelID) : (TextBox)panel.FindControl("mlbox" + panelID);
                bool needsUpdate = (Convert.ToUInt32(panelID) == (uint)EHPMProjectDefaultColumn.Comments) ? (textbox.Text.Trim().Length > 0) : (String.Compare(((string)drow[panelID]).Replace("\r\n", "\n"), textbox.Text.Replace("\r\n", "\n")) != 0);

                if (needsUpdate)
                    UpdateColumn(projectID, taskID, Convert.ToUInt32(panelID), textbox.Text, null);
            }

            //Reset the edit index.
            gView.EditIndex = -1;
            gView.SelectedIndex = -1;

            List<HPMWIColumn> columns = GetColumns(project);
            foreach (HPMWIColumn column in columns)
            {
                UpdateRow(taskID, projectID, column, drow, false);
            }
            ShowNoItemSelectedText(project, true, "");
            MultilineTabsSetText(project, drow, false);

            //Bind data to the GridView control.
            BindGrid(project, dt);
        }

        /// <summary>
        /// Handles row delete event.
        /// </summary>
        protected void gView_RowDeleting(object sender, GridViewDeleteEventArgs e)
        {
            GridView gView = sender as GridView;
            string project = GetProject(gView);
            DataTable dt = GetDataSource(project);

            Int32 ID = Convert.ToInt32(gView.DataKeys[e.RowIndex].Value);
            DataRow drow = dt.Rows.Find(ID);
            HPMUniqueID taskID = new HPMUniqueID(ID);
            DeleteTask(taskID, drow);
            gView.EditIndex = -1;
            gView.SelectedIndex = -1;
            ShowNoItemSelectedText(project, true, "");
            BindGrid(project, dt);
        }

        /// <summary>
        /// Handles new page selection event.
        /// </summary>
        protected void gView_PageIndexChanging(object sender, GridViewPageEventArgs e)
        {
            GridView gView = sender as GridView;
            gView.PageIndex = e.NewPageIndex;
            string project = GetProject(gView);
            DataTable dt = GetDataSource(project);
            //Bind data to the GridView control.
            gView.EditIndex = -1;
            gView.SelectedIndex = -1;
            ShowNoItemSelectedText(project, true, "");
            BindGrid(project, dt);

        }

        /// <summary>
        /// Handles row selection event.
        /// </summary>
        protected void gView_SelectIndexChanging(object sender, GridViewSelectEventArgs e)
        {
            GridView gView = sender as GridView;
            string project = GetProject(gView);
            DataTable dt = GetDataSource(project);
            Int32 ID = Convert.ToInt32(gView.DataKeys[e.NewSelectedIndex].Value);
            DataRow drow = dt.Rows.Find(ID);
            string itemName = drow[Convert.ToString((uint)EHPMProjectDefaultColumn.ItemName)] as string;

            if (dt != null)
            {
                bool deselect = (gView.SelectedIndex == e.NewSelectedIndex);
                if (deselect)
                {
                    e.Cancel = true;
                    gView.SelectedIndex = -1;
                    gView.EditIndex = -1;
                }
                itemName = (itemName.Length > 0) ? itemName : Convert.ToString(ID);
                ShowNoItemSelectedText(project, deselect, "Selected item " + itemName);
                MultilineTabsSetText(project, drow, !deselect);
                CommandField cf = gView.Columns[0] as CommandField;

                GridViewRow row = gView.Rows[e.NewSelectedIndex];
                LinkButton selectButton = row.Cells[0].Controls[4] as LinkButton;
                selectButton.Text = (deselect) ? "Select" : "Deselect";
                BindGrid(project, dt);
            }
        }

        /// <summary>
        /// Handles event from search string and report dropdownlist
        /// </summary>
        protected void findContext_SelectionChanged(object sender, EventArgs args)
        {
            string project = GetProjectFromControl(sender);
            HPMUniqueID projectID = new HPMUniqueID(Convert.ToInt32(project));

            DropDownList reportlist = GetReportList(project);
            string userAndReport = reportlist.SelectedItem.Value;
            project = GetProjectFromReportList(reportlist);
            projectID = new HPMUniqueID(Convert.ToInt32(project));
            TextBox searchBox = GetSearchBox(project);

            SetReportListCookie(project, userAndReport);
            UpdateFindContext(projectID, project, userAndReport, searchBox.Text.Trim());

            DataTable dt = GetNewDataTable(project);

            AddTasks(projectID, project, dt);
            SetDataSource(dt, project);
            BindGrid(project, dt);
        }

        /// <summary>
        /// Handles event from project tab selection. This selection is stored in Session to outlive postbacks. Unfortunately selection of first tab doesn't fire event. Grrr. 
        /// </summary>
        protected void projectTabs_ActiveTabChanged(object sender, EventArgs args)
        {
            TabContainer projectTabs = sender as TabContainer;
            Session["ActiveTabIndex"] = projectTabs.ActiveTabIndex;
        }

        /// <summary>
        /// Stores report selection between sessions in cookie.
        /// </summary>
        private void SetReportListCookie(string projectid, string userAndReport)
        {
            HttpCookie aCookie = new HttpCookie(projectid);
            double days = 14;
            if (userAndReport == "0$$0")
                days = -1;

            aCookie.Value = userAndReport;
            aCookie.Expires = DateTime.Now.AddDays(days);
            Response.Cookies.Add(aCookie);
        }

        private string GetReportListCookie(string projectid)
        {
            if (Request.Cookies[projectid] != null)
            {
                return Request.Cookies[projectid].Value;
            }
            return null;
        }

        private void BindGrid(string project, DataTable dt)
        {
            GridView gView = GetGridView(project);
            gView.DataSource = dt;
            gView.DataBind();
        }

        private void BindReports(string projectid)
        {
            DropDownList reportlist = GetReportList(projectid);
            //reportlist.SelectedIndexChanged -= findContext_SelectionChanged;
            reportlist.DataSource = GetReportDataSource(projectid);
            reportlist.DataBind();
            //reportlist.SelectedIndexChanged += new EventHandler(findContext_SelectionChanged);

        }

        // Lots of control and project id retrieval methods
        protected DataTable GetDataSource(string projectid)
        {
            //Retrieve the table from the session object
            return Session[projectid] as DataTable;
        }

        protected void SetDataSource(DataTable dt, string projectid)
        {
            //Persist the table in the Session object.
            Session[projectid] = dt;
        }

        protected Dictionary<string, string> GetReportDataSource(string projectid)
        {
            return Session["Reports" + projectid] as Dictionary<string, string>;
        }

        protected void SetReportDataSource(Dictionary<string, string> ds, string projectid)
        {
            Session["Reports" + projectid] = ds;
        }

        protected void SetFindContext(HPMFindContext context, string projectid)
        {
            Session["FindContext" + projectid] = context;
        }

        protected HPMFindContext GetFindContext(string projectid)
        {
            return Session["FindContext" + projectid] as HPMFindContext;
        }

        protected GridView GetGridView(string projectid)
        {
            return Page.FindControl("ProjectTabs").FindControl("Panel" + projectid).FindControl("BugTablePanel" + projectid).FindControl("BugTable" + projectid) as GridView;
        }

        protected TabContainer GetMultilineTabContainer(string projectid)
        {
            return Page.FindControl("ProjectTabs").FindControl("Panel" + projectid).FindControl("MultilineTabs" + projectid) as TabContainer;

        }

        protected TabPanel GetProjectPanel(string projectid)
        {
            return Page.FindControl("ProjectTabs").FindControl("Panel" + projectid) as TabPanel;
        }

        protected DropDownList GetReportList(string projectid)
        {
            return Page.FindControl("ProjectTabs").FindControl("Panel" + projectid).FindControl("Reports" + projectid) as DropDownList;
        }

        protected TextBox GetSearchBox(string projectid)
        {
            return Page.FindControl("ProjectTabs").FindControl("Panel" + projectid).FindControl("Search" + projectid) as TextBox;
        }

        private void SetProjectList(List<string> projectlist)
        {
            Session["Projects"] = projectlist;
        }

        private List<string> GetProjectList()
        {
            return Session["Projects"] as List<string>;
        }

        private string GetProject(GridView gView)
        {
            return gView.ID.Substring("BugTable".Length);
        }

        private string GetProjectFromControl(object control)
        {
            if (control is DropDownList)
            {
                return GetProjectFromReportList((DropDownList)control);
            }
            else if (control is TextBox)
            {
                return GetProjectFromSearchBox((TextBox)control);
            }
            return "";
        }

        private string GetProjectFromReportList(DropDownList list)
        {
            return list.ID.Substring("Reports".Length);
        }

        private string GetProjectFromSearchBox(TextBox searchBox)
        {
            return searchBox.ID.Substring("Search".Length);
        }

        private void SetColumns(string projectid, List<HPMWIColumn> columns)
        {
            Session["Columns" + projectid] = columns;
        }

        private List<HPMWIColumn> GetColumns(string projectid)
        {
            return Session["Columns" + projectid] as List<HPMWIColumn>;
        }

        /// <summary>
        /// Add controls to page. Important to give every control an unique ID that is identical between postbacks otherwise AJAX UpdatePanel won't work.
        /// </summary>
        private void AddProjectControls()
        {
            try
            {
                HPMProjectEnum projects = m_VirtSession.ProjectEnum();

                TabContainer ProjectsTabContainer = new TabContainer();
                //ProjectsTabContainer.ScrollBars = ScrollBars.Auto;
                ProjectsTabContainer.ID = "ProjectTabs";
                ProjectsTabContainer.AutoPostBack = true;
                ProjectsTabContainer.CssClass = "HPMProjectTab";
                ProjectsTabContainer.ActiveTabChanged += new EventHandler(projectTabs_ActiveTabChanged);

                int noProjects = 0;
                //Loop through projects
                for (HPMUInt32 i = 0; i < projects.m_Projects.Length; ++i)
                {
                    HPMUniqueID projectID = projects.m_Projects[i];
                    HPMProjectProperties projectprops = m_VirtSession.ProjectGetProperties(projectID);
                    HPMUniqueID qaProjectID = m_VirtSession.ProjectOpenQAProjectBlock(projectID);

                    if (!m_VirtSession.ProjectResourceUtilIsMember(projectID, m_ResourceID))
                        continue;
                    noProjects++;
                    string qaProject = Convert.ToString(qaProjectID.m_ID);

                    TabPanel ProjectPanel = new TabPanel();
                    ProjectPanel.HeaderTemplate = new HPMHeaderTemplate(ListItemType.Header, projectprops.m_Name);
                    ProjectPanel.HeaderText = projectprops.m_Name;
                    ProjectPanel.ID = "Panel" + qaProject;

                    ProjectPanel.Controls.Add(new LiteralControl("<div id=\"searchrow" + qaProject + "\"class=\" searchrow\">"));
                    Label FindLabel = new Label();
                    FindLabel.CssClass = "HPMTextAndLabelStyle";
                    FindLabel.Text = "Find by keywords";
                    ProjectPanel.Controls.Add(FindLabel);
                    TextBox SearchBox = new TextBox();
                    SearchBox.ID = "Search" + qaProject;
                    SearchBox.AutoPostBack = true;
                    SearchBox.AutoCompleteType = AutoCompleteType.None;
                    SearchBox.Text = String.Empty;
                    SearchBox.TextChanged += new EventHandler(findContext_SelectionChanged);
                    ProjectPanel.Controls.Add(SearchBox);

                    ProjectPanel.Controls.Add(new LiteralControl("<span class=\"HPMLeftSpace\">"));
                    Label ReportLabel = new Label();
                    ReportLabel.Text = "Report";
                    ReportLabel.CssClass = "HPMTextAndLabelStyle";
                    ProjectPanel.Controls.Add(ReportLabel);
                    DropDownList ReportList = new DropDownList();
                    ReportList.ID = "Reports" + qaProject;
                    ReportList.DataTextField = "Value";
                    ReportList.DataValueField = "Key";
                    ReportList.AutoPostBack = true;
                    ReportList.SelectedIndexChanged += new EventHandler(findContext_SelectionChanged);

                    ProjectPanel.Controls.Add(ReportList);
                    ProjectPanel.Controls.Add(new LiteralControl("</span>"));
                    ProjectPanel.Controls.Add(new LiteralControl("</div>"));
                    if (CanAddBugs(qaProjectID, m_ResourceID))
                    {
                        ProjectPanel.Controls.Add(new LiteralControl("<div id=\"reportrow" + qaProject + "\" class=\"reportrow\">"));
                        Button AddButton = new Button();
                        AddButton.ID = "ReportBugButton" + qaProject;
                        AddButton.Text = "Report new bug";
                        AddButton.Click += new System.EventHandler(button_AddBugClick);
                        AddButton.CssClass = "HPMButtonStyle";
                        ProjectPanel.Controls.Add(AddButton);
                        ProjectPanel.Controls.Add(new LiteralControl("</div>"));
                    }

                    GridView gView = new GridView();
                    gView.CssClass = "HPMGridViewStyle";
                    gView.RowStyle.CssClass = "HPMRowStyle";
                    gView.EmptyDataRowStyle.CssClass = "HPMEmptyRowStyle";
                    gView.PagerStyle.CssClass = "HPMPagerStyle";
                    gView.SelectedRowStyle.CssClass = "HPMSelectedRowStyle";
                    gView.HeaderStyle.CssClass = "HPMHeaderStyle";
                    gView.EditRowStyle.CssClass = "HPMEditRowStyle";
                    gView.AlternatingRowStyle.CssClass = "HPMAltRowStyle";
                    gView.DataKeyNames = new string[] { "_ID" };

                    gView.ID = "BugTable" + qaProject;
                    gView.AllowSorting = true;
                    gView.AllowPaging = true;
                    gView.PageSize = Convert.ToInt32(((Hashtable)ConfigurationManager.GetSection("HPM"))["bugsperpage"].ToString());
                    gView.AutoGenerateColumns = false;
                    gView.Sorting += new GridViewSortEventHandler(gView_Sorting);
                    gView.RowCancelingEdit += new GridViewCancelEditEventHandler(gView_CancelingRowEdit);
                    gView.RowEditing += new GridViewEditEventHandler(gView_RowEdit);
                    gView.RowUpdating += new GridViewUpdateEventHandler(gView_RowUpdating);
                    gView.RowDeleting += new GridViewDeleteEventHandler(gView_RowDeleting);
                    gView.PageIndexChanging += new GridViewPageEventHandler(gView_PageIndexChanging);
                    gView.SelectedIndexChanging += new GridViewSelectEventHandler(gView_SelectIndexChanging);
                    gView.RowDataBound += new GridViewRowEventHandler(gView_RowDataBound);

                    Panel gViewPanel = new Panel();
                    gViewPanel.ScrollBars = ScrollBars.Horizontal;
                    gViewPanel.ID = "BugTablePanel" + qaProject;
                    gViewPanel.CssClass = "tbin";
                    gViewPanel.Controls.Add(gView);
                    ProjectPanel.Controls.Add(gViewPanel);

                    ProjectPanel.Controls.Add(new LiteralControl("<div id=\"itemselectedrow" + qaProject + "\" class=\"itemselectedrow\">"));
                    Label NothingSelectedLabel = new Label();
                    NothingSelectedLabel.ID = "NotingSelectedLabel" + qaProject;
                    NothingSelectedLabel.Text = "No item selected";
                    ProjectPanel.Controls.Add(NothingSelectedLabel);
                    ProjectPanel.Controls.Add(new LiteralControl("</div>"));
                    TabContainer BugMultilineTabContainer = new TabContainer();
                    BugMultilineTabContainer.ID = "MultilineTabs" + qaProject;
                    BugMultilineTabContainer.CssClass = "HPMMultilineTab";
                    ProjectPanel.Controls.Add(BugMultilineTabContainer);
                    ProjectsTabContainer.Controls.Add(ProjectPanel);
                    AddColumns(gView, BugMultilineTabContainer, qaProjectID, qaProject);
                }

                UpdatePanel1.ContentTemplateContainer.Controls.Add(ProjectsTabContainer);
                if (noProjects == 0)
                    SetErrorMessage("No projects configured for user", "");
            }
            catch (HPMSdkException error)
            {
                SetErrorMessage("Could not get project info from Hansoft", error.ErrorAsStr());
            }
            catch (HPMSdkManagedException error)
            {
                SetErrorMessage("Could not get project info from Hansoft", error.ErrorAsStr());
            }

        }

        /// <summary>
        /// Add actual data from Hansoft to data model's DataTable.
        /// </summary>
        private void AddData()
        {
            HPMProjectEnum projects = m_VirtSession.ProjectEnum();
            List<string> projectlist = new List<string>();

            foreach (HPMUniqueID projectID in projects.m_Projects)
            {
                if (!m_VirtSession.ProjectResourceUtilIsMember(projectID, m_ResourceID))
                    continue;
                HPMUniqueID qaProjectID = m_VirtSession.ProjectUtilGetQA(projectID);
                string qaProject = Convert.ToString(qaProjectID.m_ID);
                DataTable dt = GetNewDataTable(qaProject);

                var repdict = new Dictionary<HPMString, HPMString>();
                AddReports(qaProjectID, repdict);
                SetReportDataSource(repdict, qaProject);
                SelectStoredReport(qaProjectID, qaProject, repdict);

                AddTasks(qaProjectID, qaProject, dt);
                SetDataSource(dt, qaProject);
                projectlist.Add(qaProject);
            }
            SetProjectList(projectlist);
        }

        private DataTable GetNewDataTable(string project)
        {
            DataTable dt = new DataTable();
            dt.Columns.Add(new DataColumn("_ID", typeof(System.Int32)));
            dt.Columns["_ID"].Unique = true;
            dt.PrimaryKey = new DataColumn[] { dt.Columns["_ID"] };

            List<HPMWIColumn> columns = GetColumns(project);
            foreach (HPMWIColumn column in columns)
            {
                string colID = Convert.ToString((HPMUInt32)column.Column.m_ColumnID);
                if (IsNumericColumn(column))
                {

                    dt.Columns.Add(new DataColumn(colID, typeof(System.UInt32)));
                }
                else
                {
                    dt.Columns.Add(colID);
                }
            }

            return dt;
        }

        private void AddMultilineTab(string project, TabContainer multilineContainer, string tabName, string tabID, bool readOnly)
        {
            TabPanel MultilinePanel = new TabPanel();
            MultilinePanel.HeaderText = tabName;
            MultilinePanel.ID = tabID;
            TextBox Multilinebox = new TextBox();
            Multilinebox.CssClass = "HPMTabText";
            Multilinebox.ID = "mlbox" + tabID;
            Multilinebox.TextMode = TextBoxMode.MultiLine;
            Multilinebox.ReadOnly = true;
            MultilinePanel.Controls.Add(Multilinebox);
            // dummy used to store readonly state of field
            LiteralControl dummy = new LiteralControl();
            dummy.Visible = false;
            dummy.Text = Convert.ToString(readOnly);
            dummy.ID = "dummy";
            MultilinePanel.Controls.Add(dummy);
            multilineContainer.Controls.Add(MultilinePanel);
        }

        /// <summary>
        /// Comments is a special case of multiline fields. Consists of two text fields - one for new comment and one for old comments.
        /// </summary>
        private void AddMultilineTabComments(string project, TabContainer multilineContainer, string tabName, string tabID, bool readOnly)
        {
            TabPanel MultilinePanel = new TabPanel();
            MultilinePanel.HeaderText = tabName;
            MultilinePanel.ID = tabID;
            TextBox commentbox = new TextBox();
            commentbox.CssClass = "HPMTabTextComment";
            commentbox.ID = "mlboxc" + tabID;
            commentbox.TextMode = TextBoxMode.MultiLine;
            commentbox.ReadOnly = true;
            // dummy used to store readonly state of field
            LiteralControl dummy = new LiteralControl();
            dummy.Visible = false;
            dummy.Text = Convert.ToString(readOnly);
            dummy.ID = "dummy";
            MultilinePanel.Controls.Add(commentbox);
            TextBox oldcommentbox = new TextBox();
            oldcommentbox.CssClass = "HPMTabTextComment";
            oldcommentbox.ID = "mlbox" + tabID;
            oldcommentbox.TextMode = TextBoxMode.MultiLine;
            oldcommentbox.ReadOnly = true;
            MultilinePanel.Controls.Add(oldcommentbox);
            MultilinePanel.Controls.Add(dummy);
            multilineContainer.Controls.Add(MultilinePanel);
        }

        private void MultilineTabsReadOnly(Boolean isReadOnly, String project)
        {
            TabContainer multilineTabs = GetMultilineTabContainer(project);
            foreach (TabPanel panel in multilineTabs.Tabs)
            {
                string ID = panel.ID;
                TextBox textbox = (Convert.ToUInt32(ID) == (uint)EHPMProjectDefaultColumn.Comments) ? (TextBox)panel.FindControl("mlboxc" + ID) : (TextBox)panel.FindControl("mlbox" + ID);
                LiteralControl dummy = panel.FindControl("dummy") as LiteralControl;
                bool fieldIsReadOnly = Convert.ToBoolean(dummy.Text);
                if (fieldIsReadOnly)
                    isReadOnly = true;
                textbox.ReadOnly = isReadOnly;
            }
        }

        private void MultilineTabsSetText(string project, DataRow drow, bool setText)
        {
            TabContainer multilineTabs = GetMultilineTabContainer(project);
            foreach (TabPanel panel in multilineTabs.Tabs)
            {
                string ID = panel.ID;
                TextBox textbox = panel.FindControl("mlbox" + ID) as TextBox;
                if (setText)
                {
                    string text = drow[ID] as string;
                    textbox.Text = (text != null) ? text : "";
                }
                else
                {
                    if (Convert.ToUInt32(ID) == (uint)EHPMProjectDefaultColumn.Comments)
                    {
                        TextBox textboxc = panel.FindControl("mlboxc" + ID) as TextBox;
                        textboxc.Text = "";
                    }
                    textbox.Text = "";
                }
            }
        }

        private void ShowNoItemSelectedText(string project, bool show, string select)
        {
            string text = (show) ? "No item selected" : select;
            Label NothingSelectedLabel = Page.FindControl("ProjectTabs").FindControl("Panel" + project).FindControl("NotingSelectedLabel" + project) as Label;
            NothingSelectedLabel.Text = text;
        }

        private bool IsNumericColumn(HPMWIColumn column)
        {
            if ((column.Column.m_ColumnID == (int)EHPMProjectDefaultColumn.DatabaseID) || (column.Column.m_ColumnID == (int)EHPMProjectDefaultColumn.ID) || (column.Column.m_ColumnID == (int)EHPMProjectDefaultColumn.BugPriority) ||
                (column.Column.m_ColumnID == (int)EHPMProjectDefaultColumn.Risk) || (column.Column.m_ColumnID == (int)EHPMProjectDefaultColumn.Severity) || (column.Column.m_ColumnID == (int)EHPMProjectDefaultColumn.Confidence))
            {
                return true;
            }
            else if ((column.Column.m_ColumnType == EHPMColumnType.CustomColumn) && (column.Type == (int)EHPMProjectCustomColumnsColumnType.DropList))
                return true;
            return false;
        }

        /// <summary>
        /// Add all columns from a Hansoft project to GridView.
        /// </summary>
        private void AddColumns(GridView gView, TabContainer multilineTabs, HPMUniqueID projectID, string project)
        {
            CommandField editfield = new CommandField();
            editfield.ShowEditButton = true;
            editfield.ShowDeleteButton = true;
            editfield.ShowCancelButton = true;
            editfield.ShowSelectButton = true;
            editfield.UpdateText = "Save";
            gView.Columns.Add(editfield);

            List<HPMWIColumn> columns = new List<HPMWIColumn>();

            HPMProjectCustomColumns customColumns = m_VirtSession.ProjectCustomColumnsGet(projectID);
            HPMProjectDefaultColumns defaultColumns = m_VirtSession.ProjectGetDefaultActivatedColumns(projectID);
            HPMProjectDefaultColumns nonHidableDefaultColumns = m_VirtSession.ProjectGetDefaultActivatedNonHidableColumns(projectID, EHPMProjectGetDefaultActivatedNonHidableColumnsFlag.AgileMode | EHPMProjectGetDefaultActivatedNonHidableColumnsFlag.ScheduledMode);


            foreach (EHPMProjectDefaultColumn defaultColumn in nonHidableDefaultColumns.m_Columns)
            {
                HPMColumnDescription description = AddDefaultColumn(gView, multilineTabs, projectID, defaultColumn, project);
                HPMColumn column = new HPMColumn();
                column.m_ColumnType = EHPMColumnType.DefaultColumn;
                column.m_ColumnID = (uint)defaultColumn;
                columns.Add(new HPMWIColumn(column, (int)description.m_CriteriaDataType));
            }
            foreach (EHPMProjectDefaultColumn defaultColumn in defaultColumns.m_Columns)
            {
                HPMColumnDescription description = AddDefaultColumn(gView, multilineTabs, projectID, defaultColumn, project);
                HPMColumn column = new HPMColumn();
                column.m_ColumnType = EHPMColumnType.DefaultColumn;
                column.m_ColumnID = (uint)defaultColumn;
                columns.Add(new HPMWIColumn(column, (int)description.m_CriteriaDataType));

            }
            foreach (HPMProjectCustomColumnsColumn customColumn in customColumns.m_ShowingColumns)
            {
                AddCustomColumn(gView, multilineTabs, projectID, customColumn, project);
                HPMColumn column = new HPMColumn();
                column.m_ColumnType = EHPMColumnType.CustomColumn;
                column.m_ColumnID = customColumn.m_Hash;
                columns.Add(new HPMWIColumn(column, (int)customColumn.m_Type));
            }

            BoundField idField = new BoundField();
            idField.Visible = false;
            idField.DataField = "_ID";
            SetColumns(project, columns);

        }

        private HPMColumnDescription AddDefaultColumn(GridView gView, TabContainer multilineContainer, HPMUniqueID projectID, EHPMProjectDefaultColumn defaultColumn, string project)
        {
            HPMColumn column = new HPMColumn();
            column.m_ColumnType = EHPMColumnType.DefaultColumn;
            column.m_ColumnID = (uint)defaultColumn;
            HPMColumnDescription columnDescription = m_VirtSession.UtilGetColumnDescription(column);
            HPMUntranslatedString columnNameUntr = m_VirtSession.UtilGetColumnName(defaultColumn);
            HPMString columnName = m_VirtSession.LocalizationTranslateString(m_VirtSession.LocalizationGetDefaultLanguage(), columnNameUntr);
            bool isReadOnly = columnDescription.m_bReadOnly;
            if (defaultColumn == EHPMProjectDefaultColumn.LinkedTo)
                isReadOnly = true;
            if ((defaultColumn == EHPMProjectDefaultColumn.DetailedDescription)
                || (defaultColumn == EHPMProjectDefaultColumn.StepsToReproduce))
            {
                AddMultilineTab(project, multilineContainer, columnName, Convert.ToString((uint)defaultColumn), isReadOnly);
                return columnDescription;
            }
            if (defaultColumn == EHPMProjectDefaultColumn.Comments)
            {
                AddMultilineTabComments(project, multilineContainer, columnName, Convert.ToString((uint)defaultColumn), isReadOnly);
                return columnDescription;
            }
            if (defaultColumn == EHPMProjectDefaultColumn.OriginallyCreatedBy)
                columnDescription.m_CriteriaDataType = EHPMFindCriteriaDataType.Text;
            if (defaultColumn == EHPMProjectDefaultColumn.MilestoneTag)
                columnDescription.m_CriteriaDataType = EHPMFindCriteriaDataType.Droplist;
            switch (columnDescription.m_CriteriaDataType)
            {
                case EHPMFindCriteriaDataType.Integer:
                case EHPMFindCriteriaDataType.Float:
                case EHPMFindCriteriaDataType.Date:
                case EHPMFindCriteriaDataType.GeneralCondition:

                case EHPMFindCriteriaDataType.Text:
                    {
                        BoundField textfield = new BoundField();
                        string id = Convert.ToString((uint)defaultColumn);
                        textfield.HeaderText = columnName;
                        textfield.AccessibleHeaderText = id;
                        textfield.SortExpression = id;
                        textfield.DataField = id;
                        textfield.ReadOnly = isReadOnly;
                        gView.Columns.Add(textfield);
                    }
                    break;
                case EHPMFindCriteriaDataType.Droplist:
                    {
                        string id = Convert.ToString((uint)defaultColumn);

                        var values = new Dictionary<HPMUInt32, HPMString>();

                        HPMColumnData Data = m_VirtSession.UtilGetColumnData(projectID, defaultColumn);
                        // used to determine width of column
                        int longestString = 0;
                        foreach (HPMUInt32 DataItem in Data.m_DataItems)
                        {
                            HPMUntranslatedString DataItemTextUntranslated = m_VirtSession.UtilGetColumnDataItemFormatted(projectID, defaultColumn, DataItem);
                            HPMString DataItemText = m_VirtSession.LocalizationTranslateString(m_VirtSession.LocalizationGetDefaultLanguage(), DataItemTextUntranslated);

                            if (DataItemText.Length > longestString)
                                longestString = DataItemText.Length;
                            values.Add(DataItem, DataItemText);
                        }
                        // add some space to column width
                        longestString = longestString * 30;

                        TemplateField listfield = new TemplateField();
                        listfield.SortExpression = id;
                        listfield.HeaderText = columnName;
                        listfield.AccessibleHeaderText = id;
                        bool isNumeric = true;
                        if ((defaultColumn == EHPMProjectDefaultColumn.BugStatus) || (defaultColumn == EHPMProjectDefaultColumn.MilestoneTag) || (defaultColumn == EHPMProjectDefaultColumn.CommittedToSprint))
                            isNumeric = false;
                        listfield.ItemTemplate = new HPMGridViewTemplate(ListItemType.Item, HPMGridViewTemplateType.DropDownList, id, id, values, isReadOnly, isNumeric);

                        listfield.EditItemTemplate = new HPMGridViewTemplate(ListItemType.EditItem, HPMGridViewTemplateType.DropDownList, id, id, values, isReadOnly, isNumeric);
                        listfield.ItemStyle.Width = longestString;
                        listfield.ItemStyle.Wrap = false;
                        gView.Columns.Add(listfield);
                    }
                    break;
                case EHPMFindCriteriaDataType.MultiSelectDroplist:
                    {
                        string id = Convert.ToString((uint)defaultColumn);

                        HPMUniqueID projectid = m_VirtSession.UtilGetRealProjectIDFromProjectID(projectID);
                        bool addResourceGroups = (defaultColumn == EHPMProjectDefaultColumn.AssignedTo) ? false : true;
                        var values = GetResources(projectid, addResourceGroups);

                        TemplateField listfield = new TemplateField();
                        listfield.SortExpression = id;
                        listfield.HeaderText = columnName;
                        listfield.AccessibleHeaderText = id;
                        listfield.ItemTemplate = new HPMGridViewTemplate(ListItemType.Item, HPMGridViewTemplateType.CheckBoxList, id, id, values, isReadOnly, false);

                        listfield.EditItemTemplate = new HPMGridViewTemplate(ListItemType.EditItem, HPMGridViewTemplateType.CheckBoxList, id, id, values, isReadOnly, false);
                        gView.Columns.Add(listfield);
                    }
                    break;

            }
            return columnDescription;
        }

        private void AddCustomColumn(GridView gView, TabContainer multilineContainer, HPMUniqueID projectID, HPMProjectCustomColumnsColumn customColumn, string project)
        {
            string id = Convert.ToString(customColumn.m_Hash);
            bool isReadOnly = true;

            if (Convert.ToBoolean(customColumn.m_AccessRights & EHPMProjectCustomColumnsColumnAccessRights.AllProjectMembers))
            {
                isReadOnly = false;
            }
            else if (Convert.ToBoolean(customColumn.m_AccessRights & EHPMProjectCustomColumnsColumnAccessRights.MainProjectManagers))
            {
                HPMUniqueID realprojectID = m_VirtSession.UtilGetRealProjectIDFromProjectID(projectID);
                HPMProjectResourceProperties userProperties = m_VirtSession.ProjectResourceGetProperties(realprojectID, m_ResourceID);

                if (Convert.ToBoolean(userProperties.m_Flags & EHPMProjectResourceFlag.IsMainProjectManager))
                    isReadOnly = false;
            }
            else if (Convert.ToBoolean(customColumn.m_AccessRights & EHPMProjectCustomColumnsColumnAccessRights.ReadOnly))
            {
                isReadOnly = true;
            }
            switch (customColumn.m_Type)
            {
                case EHPMProjectCustomColumnsColumnType.IntegerNumber:
                case EHPMProjectCustomColumnsColumnType.FloatNumber:
                case EHPMProjectCustomColumnsColumnType.DateTime:
                case EHPMProjectCustomColumnsColumnType.DateTimeWithTime:
                case EHPMProjectCustomColumnsColumnType.Text:
                case EHPMProjectCustomColumnsColumnType.Hyperlink:
                    {
                        BoundField textfield = new BoundField();
                        textfield.HeaderText = customColumn.m_Name;
                        textfield.SortExpression = id;
                        textfield.AccessibleHeaderText = id;
                        textfield.DataField = id;
                        textfield.ReadOnly = isReadOnly;
                        gView.Columns.Add(textfield);
                    }
                    break;
                case EHPMProjectCustomColumnsColumnType.Resources:
                    {
                        HPMUniqueID projectid = m_VirtSession.UtilGetRealProjectIDFromProjectID(projectID);
                        var values = GetResources(projectid, true);

                        TemplateField listfield = new TemplateField();
                        listfield.SortExpression = id;
                        listfield.HeaderText = customColumn.m_Name;
                        listfield.AccessibleHeaderText = id;
                        listfield.ItemTemplate = new HPMGridViewTemplate(ListItemType.Item, HPMGridViewTemplateType.CheckBoxList, id, id, null, isReadOnly, false);

                        listfield.EditItemTemplate = new HPMGridViewTemplate(ListItemType.EditItem, HPMGridViewTemplateType.CheckBoxList, id, id, values, isReadOnly, false);
                        gView.Columns.Add(listfield);
                    }
                    break;
                case EHPMProjectCustomColumnsColumnType.MultiSelectionDropList:
                    {
                        var values = new Dictionary<HPMUInt32, HPMString>();

                        string nothingSet = "(nothing  set)";

                        values.Add(0, nothingSet);
                        foreach (HPMProjectCustomColumnsColumnDropListItem DataItem in customColumn.m_DropListItems)
                        {
                            values.Add(DataItem.m_Id, DataItem.m_Name);
                        }

                        TemplateField listfield = new TemplateField();
                        listfield.SortExpression = id;
                        listfield.HeaderText = customColumn.m_Name;
                        listfield.AccessibleHeaderText = id;
                        listfield.ItemTemplate = new HPMGridViewTemplate(ListItemType.Item, HPMGridViewTemplateType.CheckBoxList, id, id, null, isReadOnly, false);

                        listfield.EditItemTemplate = new HPMGridViewTemplate(ListItemType.EditItem, HPMGridViewTemplateType.CheckBoxList, id, id, values, isReadOnly, false);
                        gView.Columns.Add(listfield);
                    }
                    break;
                case EHPMProjectCustomColumnsColumnType.DropList:
                    {
                        var values = new Dictionary<HPMUInt32, HPMString>();

                        string nothingSet = "(nothing  set)";
                        // used to determine width of column
                        int longestString = nothingSet.Length;
                        values.Add(0, nothingSet);
                        foreach (HPMProjectCustomColumnsColumnDropListItem DataItem in customColumn.m_DropListItems)
                        {
                            if (DataItem.m_Name.Length > longestString)
                                longestString = DataItem.m_Name.Length;
                            values.Add(DataItem.m_Id, DataItem.m_Name);
                        }
                        // add some space to column width
                        longestString = longestString * 30;

                        TemplateField listfield = new TemplateField();

                        listfield.SortExpression = id;
                        listfield.HeaderText = customColumn.m_Name;
                        listfield.AccessibleHeaderText = id;
                        listfield.ItemTemplate = new HPMGridViewTemplate(ListItemType.Item, HPMGridViewTemplateType.DropDownList, id, id, values, isReadOnly, true);

                        listfield.EditItemTemplate = new HPMGridViewTemplate(ListItemType.EditItem, HPMGridViewTemplateType.DropDownList, id, id, values, isReadOnly, true);
                        listfield.ItemStyle.Width = longestString;
                        listfield.ItemStyle.Wrap = false;
                        gView.Columns.Add(listfield);
                    }
                    break;
                case EHPMProjectCustomColumnsColumnType.MultiLineText:
                    {
                        AddMultilineTab(project, multilineContainer, customColumn.m_Name, Convert.ToString(customColumn.m_Hash), isReadOnly);
                    }
                    break;
            }
        }

        private void AddReports(HPMUniqueID projectID, Dictionary<HPMString, HPMString> repdict)
        {
            HPMResourceEnum resources = m_VirtSession.ResourceEnum();

            repdict.Add("0", "");
            repdict.Add("0$$0", "(no report  set)");
            foreach (HPMUniqueID resource in resources.m_Resources)
            {
                HPMReports reports = m_VirtSession.ProjectGetReports(projectID, resource);
                foreach (HPMReport report in reports.m_Reports)
                {
                    if (resource == m_ResourceID)
                        try
                        {
                            repdict.Add(resource + "$$" + Convert.ToString(report.m_ReportID.m_ID), report.m_Name);
                        }
                        catch (ArgumentException)
                        {
                            // already added
                        }
                    else
                    {
                        HPMResourceDefinitionList sharedToList = report.m_ShareResourceList;
                        bool isSharedToMe = false;
                        foreach (HPMResourceDefinition sharedTo in sharedToList.m_Resources)
                        {
                            switch (sharedTo.m_GroupingType)
                            {
                                case EHPMResourceGroupingType.Resource:
                                    {
                                        if (sharedTo.m_ID == m_ResourceID)
                                            isSharedToMe = true;
                                    }
                                    break;
                                case EHPMResourceGroupingType.ResourceGroup:
                                    {
                                        HPMResourceEnum groupMembers = m_VirtSession.ResourceGroupGetResources(sharedTo.m_ID);
                                        if (Array.Exists(groupMembers.m_Resources, r => r == m_ResourceID))
                                            isSharedToMe = true;
                                    }
                                    break;
                                case EHPMResourceGroupingType.AllProjectMembers:
                                    {
                                        isSharedToMe = true;
                                    }
                                    break;
                            }
                            if (isSharedToMe)
                            {
                                HPMString name = m_VirtSession.ResourceGetNameFromResource(resource);
                                try
                                {
                                    repdict.Add(resource + "$$" + Convert.ToString(report.m_ReportID.m_ID), report.m_Name + " .(Shared by " + name + ")");
                                }
                                catch (ArgumentException)
                                {
                                    // already added
                                }

                            }
                        }

                    }
                }
            }
        }

        private void SelectStoredReport(HPMUniqueID projectID, string project, Dictionary<HPMString, HPMString> repdict)
        {
            string userAndReport = GetReportListCookie(project);
            DropDownList reportList = GetReportList(project);
            reportList.DataSource = repdict;
            reportList.DataBind();
            if (userAndReport != null && reportList != null)
            {
                ListItem item = reportList.Items.FindByValue(userAndReport);
                if (item != null)
                {
                    reportList.SelectedValue = item.Value;
                    UpdateFindContext(projectID, project, userAndReport, "");
                }
            }
        }

        private void DeleteTask(HPMUniqueID taskID, DataRow drow)
        {
            try
            {
                m_VirtSession.ResourceImpersonate(m_ResourceID, EHPMDataHistoryClientOrigin.CustomSDK, m_UpdatedFromWeb);
                m_VirtSession.TaskDelete(taskID);
                // use primary key
                drow.Delete();
            }
            catch (HPMSdkException error)
            {
                SetErrorMessage("Could not delete task.", error.ErrorAsStr());
            }
            catch (HPMSdkManagedException error)
            {
                SetErrorMessage("Could not delete task.", error.ErrorAsStr());
            }
            finally
            {
                m_VirtSession.ResourceImpersonate(m_NoUserID, EHPMDataHistoryClientOrigin.CustomSDK, m_NoMessage);
            }
        }

        private void AddTasks(HPMUniqueID projectID, string project, DataTable dt)
        {
            HPMTaskEnum taskRefs = m_VirtSession.TaskRefEnum(projectID);
            foreach (HPMUniqueID taskRefID in taskRefs.m_Tasks)
            {
                AddTask(taskRefID, projectID, project, dt, false);
            }
        }

        private void AddTask(HPMUniqueID taskRefID, HPMUniqueID projectID, string project, DataTable dt, bool isNewTask)
        {
            // if we have a find context set and task ref isn't in it, we don't add it.
            if (!isNewTask && m_FindContexts.ContainsKey(project))
            {
                HPMFindContextData findContext = m_FindContexts[project];
                if (m_VirtSession.TaskRefUtilIsInFindContext(taskRefID, findContext) == false)
                    return;
            }

            HPMUniqueID taskid = m_VirtSession.TaskRefGetTask(taskRefID);

            // if a task isn't fully created yet we don't show it
            if (m_VirtSession.TaskGetFullyCreated(taskid) != true)
                return;

            DataRow drow = dt.NewRow();
            drow["_ID"] = taskid.m_ID;

            List<HPMWIColumn> columns = GetColumns(project);
            foreach (HPMWIColumn column in columns)
            {
                UpdateRow(taskid, projectID, column, drow, true);
            }
            try
            {
                dt.Rows.Add(drow);
            }
            catch (System.Data.ConstraintException)
            {
                // bug already added
            }
        }

        private void UpdateColumn(HPMUniqueID projectID, HPMUniqueID taskID, HPMUInt32 colType, string newValue, List<string> multiselections)
        {
            try
            {
                m_VirtSession.ResourceImpersonate(m_ResourceID, EHPMDataHistoryClientOrigin.CustomSDK, m_UpdatedFromWeb);
                switch (colType)
                {
                    case (uint)EHPMProjectDefaultColumn.Risk:
                        {
                            m_VirtSession.TaskSetRisk(taskID, (EHPMTaskRisk)Convert.ToInt32(newValue));
                        }
                        break;
                    case (uint)EHPMProjectDefaultColumn.Confidence:
                        {
                            m_VirtSession.TaskSetConfidence(taskID, (EHPMTaskConfidence)Convert.ToInt32(newValue));
                        }
                        break;
                    case (uint)EHPMProjectDefaultColumn.Severity:
                        {
                            m_VirtSession.TaskSetSeverity(taskID, (EHPMTaskSeverity)Convert.ToInt32(newValue));
                        }
                        break;

                    case (uint)EHPMProjectDefaultColumn.BugPriority:
                        {
                            m_VirtSession.TaskSetAgilePriorityCategory(taskID, (EHPMTaskAgilePriorityCategory)Convert.ToInt32(newValue));
                        }
                        break;
                    case (uint)EHPMProjectDefaultColumn.ItemName:
                        {
                            m_VirtSession.TaskSetDescription(taskID, newValue);
                        }
                        break;
                    case (uint)EHPMProjectDefaultColumn.CommittedToSprint:
                        {
                            HPMUniqueID linkedToSprintID = new HPMUniqueID(Convert.ToInt32(newValue));

                            HPMUniqueID taskrefid = m_VirtSession.TaskGetMainReference(linkedToSprintID);

                            m_VirtSession.TaskSetLinkedToSprint(taskID, taskrefid);
                        }
                        break;
                    case (uint)EHPMProjectDefaultColumn.MilestoneTag:
                        {
                            HPMUniqueID linkedToMilestoneID = new HPMUniqueID(Convert.ToInt32(newValue));
                            HPMUniqueID taskrefid = m_VirtSession.TaskGetMainReference(linkedToMilestoneID);

                            HPMTaskLinkedToMilestones milestones = new HPMTaskLinkedToMilestones();
                            Array.Resize(ref milestones.m_Milestones, 1);
                            milestones.m_Milestones[0] = taskrefid;
                            m_VirtSession.TaskSetLinkedToMilestones(taskID, milestones);
                        }
                        break;
                    case (uint)EHPMProjectDefaultColumn.Hyperlink:
                        {
                            m_VirtSession.TaskSetHyperlink(taskID, newValue);
                        }
                        break;
                    case (uint)EHPMProjectDefaultColumn.DetailedDescription:
                        {
                            m_VirtSession.TaskSetDetailedDescription(taskID, newValue);
                        }
                        break;
                    case (uint)EHPMProjectDefaultColumn.StepsToReproduce:
                        {
                            m_VirtSession.TaskSetStepsToReproduce(taskID, newValue);
                        }
                        break;
                    case (uint)EHPMProjectDefaultColumn.Comments:
                        PostNewCommentOnTask(taskID, newValue, m_ResourceID);
                        break;
                    case (uint)EHPMProjectDefaultColumn.CCCommentsTo:
                        {
                            HPMTaskCommentsOptions options = new HPMTaskCommentsOptions();
                            Array.Resize(ref options.m_CCNotificationsTo, multiselections.Count);
                            for (int i = 0; i < multiselections.Count; ++i)
                            {
                                HPMUniqueID resource = new HPMUniqueID(Convert.ToInt32(multiselections[i]));
                                HPMResourceReference reference = new HPMResourceReference();
                                reference.m_ID = resource;
                                if (m_VirtSession.ResourceGroupUtilResourceGroupExists(resource))
                                    reference.m_ResourceType = EHPMResourceGroupingType.ResourceGroup;
                                else
                                    reference.m_ResourceType = EHPMResourceGroupingType.Resource;
                                options.m_CCNotificationsTo[i] = reference;
                            }
                            m_VirtSession.TaskSetCommentsOptions(taskID, options);
                        }
                        break;

                    case (uint)EHPMProjectDefaultColumn.AssignedTo:
                        {
                            HPMTaskResourceAllocation oldAllocation = m_VirtSession.TaskGetResourceAllocation(taskID);

                            HPMTaskResourceAllocation resourceAllocation = new HPMTaskResourceAllocation();
                            Array.Resize(ref resourceAllocation.m_Resources, multiselections.Count);
                            for (int i = 0; i < multiselections.Count; ++i)
                            {
                                HPMTaskResourceAllocationResource resource = new HPMTaskResourceAllocationResource();
                                HPMUniqueID rid = new HPMUniqueID(Convert.ToInt32(multiselections[i]));
                                resource.m_ResourceID = rid;
                                resource.m_PercentAllocated = 100;
                                foreach (HPMTaskResourceAllocationResource oldresource in oldAllocation.m_Resources)
                                {
                                    // if the resource was previously allocated we use the old allocation percent, otherwise set it to 100%
                                    if (resource.m_ResourceID == oldresource.m_ResourceID)
                                    {
                                        resource.m_PercentAllocated = oldresource.m_PercentAllocated;
                                    }
                                }
                                resourceAllocation.m_Resources[i] = resource;
                            }
                            m_VirtSession.TaskSetResourceAllocation(taskID, resourceAllocation, true, EHPMTaskSetStatusFlag.All);
                        }
                        break;

                    case (uint)EHPMProjectDefaultColumn.WorkRemaining:
                        {
                            m_VirtSession.TaskSetWorkRemaining(taskID, Convert.ToInt32(newValue) + 1);
                        }
                        break;

                    case (uint)EHPMProjectDefaultColumn.BugStatus:
                        {
                            HPMInt32 state = Convert.ToInt32(newValue);
                            // Can only change to new status if workflow allows it
                            if (CanProgressToNewStatus(taskID, m_ResourceID, projectID, state))
                            {
                                m_VirtSession.TaskSetWorkflowStatus(taskID, state, EHPMTaskSetStatusFlag.DoAutoAssignments | EHPMTaskSetStatusFlag.DoAutoCompletion);
                            }
                        }
                        break;
                    default:
                        {
                            // custom column
                            HPMProjectCustomColumnsColumn customColumn = m_VirtSession.ProjectGetCustomColumn(projectID, colType);
                            bool doautoassignments = false;
                            string data = "";
                            switch (customColumn.m_Type)
                            {
                                case EHPMProjectCustomColumnsColumnType.DateTime:
                                case EHPMProjectCustomColumnsColumnType.DateTimeWithTime:
                                    {
                                        try
                                        {
                                            DateTime parsedDate = DateTime.Parse(newValue);
                                            data = m_VirtSession.UtilEncodeCustomColumnDateTimeValue(ToHpmTime(parsedDate));
                                        }
                                        catch (FormatException error)
                                        {
                                            SetErrorMessage("Internal error", error.Message);
                                            return;
                                        }
                                    }
                                    break;
                                case EHPMProjectCustomColumnsColumnType.Resources:
                                    {
                                        HPMResourceDefinitionList resourcesToEncode = new HPMResourceDefinitionList();
                                        Array.Resize(ref resourcesToEncode.m_Resources, multiselections.Count);
                                        for (int i = 0; i < multiselections.Count; ++i)
                                        {
                                            HPMUniqueID resource = new HPMUniqueID(Convert.ToInt32(multiselections[i]));
                                            HPMResourceDefinition resourceDef = new HPMResourceDefinition();
                                            resourceDef.m_ID = resource;
                                            if (m_VirtSession.ResourceGroupUtilResourceGroupExists(resource))
                                                resourceDef.m_GroupingType = EHPMResourceGroupingType.ResourceGroup;
                                            else
                                                resourceDef.m_GroupingType = EHPMResourceGroupingType.Resource;
                                            resourcesToEncode.m_Resources[i] = resourceDef;
                                        }
                                        data = m_VirtSession.UtilEncodeCustomColumnResourcesValue(resourcesToEncode, projectID);
                                    }
                                    break;
                                case EHPMProjectCustomColumnsColumnType.IntegerNumber:
                                case EHPMProjectCustomColumnsColumnType.FloatNumber:
                                case EHPMProjectCustomColumnsColumnType.MultiLineText:
                                case EHPMProjectCustomColumnsColumnType.Hyperlink:
                                case EHPMProjectCustomColumnsColumnType.Text:
                                    {
                                        data = newValue;
                                    }
                                    break;

                                case EHPMProjectCustomColumnsColumnType.DropList:
                                    {
                                        data = (newValue == "0") ? "" : newValue;
                                        doautoassignments = true;
                                    }
                                    break;
                                case EHPMProjectCustomColumnsColumnType.MultiSelectionDropList:
                                    {
                                        StringBuilder builder = new StringBuilder();
                                        for (int i = 0; i < multiselections.Count; ++i)
                                        {
                                            if (builder.Length > 0)
                                                builder.Append(";");
                                            string value = (multiselections[i] == "0") ? "" : multiselections[i];
                                            builder.Append(value);
                                        }
                                        data = builder.ToString();
                                        doautoassignments = true;
                                    }
                                    break;
                                // Exercise: add missing types here
                            }

                            m_VirtSession.TaskSetCustomColumnData(taskID, colType, data, doautoassignments);

                        }
                        break;

                }
            }
            catch (HPMSdkException error)
            {
                SetErrorMessage("Could not update task data.", error.ErrorAsStr());
            }
            catch (HPMSdkManagedException error)
            {
                SetErrorMessage("Could not update task data.", error.ErrorAsStr());
            }
            finally
            {
                m_VirtSession.ResourceImpersonate(m_NoUserID, EHPMDataHistoryClientOrigin.CustomSDK, m_NoMessage);
            }
        }

        private Dictionary<HPMUInt32, HPMString> GetResources(HPMUniqueID projectID, bool addResourceGroups)
        {
            var values = new Dictionary<HPMUInt32, HPMString>();
            HPMProjectResourceEnum Resources = m_VirtSession.ProjectResourceEnum(projectID);
            foreach (HPMUniqueID Resource in Resources.m_Resources)
            {
                HPMResourceProperties props = m_VirtSession.ResourceGetProperties(Resource);
                if (props.m_ResourceType == EHPMResourceType.Ghost)
                    continue;
                HPMString ResourceName = m_VirtSession.ResourceGetNameFromResource(Resource);
                values.Add((uint)Resource.m_ID, ResourceName);
            }
            if (addResourceGroups)
            {
                HPMResourceGroupEnum resourceGroups = m_VirtSession.ResourceGroupEnum();
                foreach (HPMUniqueID resourceGroup in resourceGroups.m_ResourceGroups)
                {
                    HPMString resourceGroupName = m_VirtSession.ResourceGroupGetNameFromResourceGroup(resourceGroup);
                    try
                    {
                        values.Add((uint)resourceGroup.m_ID, resourceGroupName);
                    }
                    catch (ArgumentException)
                    {
                        // Just add group once
                    }
                }
            }
            return values;
        }

        private HPMUInt64 ToHpmTime(DateTime time)
        {
            long epochtime = (time.Ticks - m_BaseTicks) / m_TickResolution;
            return (HPMUInt64)epochtime * 1000000;
        }

        private DateTime FromHpmTime(HPMUInt64 time)
        {
            long epochtime = (long)(time / 1000000);
            long timeTicks = (epochtime * m_TickResolution) + m_BaseTicks;
            return new DateTime(timeTicks, DateTimeKind.Utc);
        }

        private string PostCommentGetReplyText(string oldComment)
        {
            string reply = "";
            int pos = 0;

            while (true)
            {
                pos = oldComment.IndexOf("\r\n");

                if (pos == -1)
                {
                    if (oldComment.Length > 0)
                    {
                        reply += "> " + oldComment;
                    }
                    break;
                }

                string temp = "";
                if (pos > 0)
                    temp = oldComment.Substring(0, pos);
                if (oldComment[pos] == '\r')
                {
                    ++pos;
                    if (oldComment[pos] == '\n')
                        ++pos;
                }
                else if (oldComment[pos] == '\n')
                    ++pos;

                oldComment = oldComment.Substring(pos);

                reply += "> " + temp + "\r\n";

            }

            return reply;
        }

        private void PostNewCommentOnTask(HPMUniqueID taskID, string newComment, HPMUniqueID userID)
        {
            HPMTaskCommentEnum Comments = m_VirtSession.TaskEnumComments(taskID);
            HPMInt32 LargestComment = -1;
            foreach (HPMInt32 comment in Comments.m_Comments)
            {
                if (comment > LargestComment)
                {
                    LargestComment = comment;
                }
            }

            string OldText = "";
            if (LargestComment >= 0)
            {
                HPMTaskComment TaskComment = m_VirtSession.TaskGetComment(taskID, LargestComment);

                DateTime OldTime = FromHpmTime(TaskComment.m_PostDate);

                string Name = TaskComment.m_PostedByResource;
                if (m_VirtSession.UtilIsIDValid(TaskComment.m_PostedByResourceID))
                {
                    HPMResourceProperties ResProp = m_VirtSession.ResourceGetProperties(TaskComment.m_PostedByResourceID);
                    Name = ResProp.m_Name;
                }

                OldText = "\r\n> On " + OldTime.ToString("yyyy-MM-dd - HH:mm") + ", " + Name + " wrote:\r\n";
                OldText += PostCommentGetReplyText(TaskComment.m_MessageText);
            }



            string NewMessageText = newComment + "\r\n" + OldText;

            string user = m_VirtSession.ResourceGetNameFromResource(userID);

            HPMTaskComment NewComment = new HPMTaskComment();
            NewComment.m_ParentID = LargestComment;
            NewComment.m_Flags = EHPMTaskCommentFlag.IsPosted;
            NewComment.m_PostDate = ToHpmTime(DateTime.UtcNow);
            NewComment.m_PostedByResourceID = userID;
            NewComment.m_PostedByResource = user;
            NewComment.m_MessageText = NewMessageText;

            HPMInt32 NewCommentID = m_VirtSession.TaskCreateCommentBlock(taskID, NewComment);

            m_VirtSession.TaskNotifyCommentPosted(taskID, NewCommentID, false);
        }

        /// <summary>
        /// Check if workflow allows specific user to add bugs.
        /// </summary>
        private bool CanAddBugs(HPMUniqueID projectID, HPMUniqueID userID)
        {
            HPMProjectWorkflowSettings settings = m_VirtSession.ProjectWorkflowGetSettings(projectID, 0);
            foreach (HPMProjectWorkflowObject workflow in settings.m_WorkflowObjects)
            {
                if (workflow.m_ObjectType == EHPMProjectWorkflowObjectType.EntryStatus)
                {
                    foreach (HPMResourceDefinition resource in workflow.m_Resources)
                    {
                        if (resource.m_GroupingType == EHPMResourceGroupingType.AllProjectMembers)
                            return true;
                        else if (resource.m_GroupingType == EHPMResourceGroupingType.Resource)
                        {
                            if (resource.m_ID == m_ResourceID)
                                return true;
                        }
                        else if (resource.m_GroupingType == EHPMResourceGroupingType.ResourceGroup)
                        {
                            HPMResourceEnum resources = m_VirtSession.ResourceGroupGetResources(resource.m_ID);
                            {
                                foreach (HPMUniqueID expandedResource in resources.m_Resources)
                                {
                                    if (expandedResource == userID)
                                        return true;
                                }
                            }
                        }
                    }
                }
            }
            return false;
        }

        /// <summary>
        /// Check if workflow allows status change.
        /// </summary>
        private bool CanProgressToNewStatus(HPMUniqueID taskID, HPMUniqueID userID, HPMUniqueID projectID, HPMInt32 state)
        {
            try
            {
                if (m_VirtSession.UtilIsIDValid(taskID))
                {
                    HPMUniqueID realprojectID = m_VirtSession.UtilGetRealProjectIDFromProjectID(projectID);
                    HPMProjectResourceProperties userProperties = m_VirtSession.ProjectResourceGetProperties(realprojectID, userID);

                    if (Convert.ToBoolean(userProperties.m_Flags & EHPMProjectResourceFlag.IsMainProjectManager) == true)
                        return true;

                    HPMWorkflowProgressionStructure progressionStates = m_VirtSession.TaskUtilGetWorkflowProgression(taskID, userID);

                    foreach (HPMWorkflowProgressionState pstate in progressionStates.m_ProgressionStates)
                    {
                        if (state == pstate.m_StatusID)
                        {
                            if (pstate.m_RequiredFields.Length == 0)
                                return true;
                            else
                                return false;
                        }
                    }
                }
                return false;
            }
            catch (HPMSdkException error)
            {
                SetErrorMessage("Could not check progression.", error.ErrorAsStr());
                return false;
            }
            catch (HPMSdkManagedException error)
            {
                SetErrorMessage("Could not check progression.", error.ErrorAsStr());
                return false;
            }
        }

        private void CreateTask(string project)
        {
            DataTable dt = GetDataSource(project);
            if (dt != null)
            {
                try
                {
                    HPMUniqueID projectid = new HPMUniqueID(Convert.ToInt32(project));
                    HPMTaskCreateUnified taskCreate = new HPMTaskCreateUnified();
                    Array.Resize(ref taskCreate.m_Tasks, 1);

                    taskCreate.m_Tasks[0] = new HPMTaskCreateUnifiedEntry();
                    // Set previous to -1 to make it the top task.
                    HPMTaskCreateUnifiedReference PrevRefID = new HPMTaskCreateUnifiedReference();
                    PrevRefID.m_RefID = -1;
                    HPMTaskCreateUnifiedReference PrevWorkPrioRefID = new HPMTaskCreateUnifiedReference();
                    PrevWorkPrioRefID.m_RefID = -1;

                    taskCreate.m_Tasks[0].m_LocalID = 0xfab;
                    taskCreate.m_Tasks[0].m_bIsProxy = false;
                    taskCreate.m_Tasks[0].m_TaskType = EHPMTaskType.Planned;
                    taskCreate.m_Tasks[0].m_TaskLockedType = EHPMTaskLockedType.QABug;

                    taskCreate.m_Tasks[0].m_NonProxy_ReuseID = 0;
                    taskCreate.m_Tasks[0].m_NonProxy_WorkflowID = 0xffffffff;

                    taskCreate.m_Tasks[0].m_PreviousRefID = PrevRefID;

                    taskCreate.m_Tasks[0].m_PreviousWorkPrioRefID = PrevWorkPrioRefID;

                    m_VirtSession.ResourceImpersonate(m_ResourceID, EHPMDataHistoryClientOrigin.CustomSDK, m_UpdatedFromWeb);
                    HPMChangeCallbackData_TaskCreateUnified TaskCreateReturn = m_VirtSession.TaskCreateUnifiedBlock(projectid, taskCreate);

                    if (TaskCreateReturn.m_Tasks.Length == 1)
                    {
                        // The returned is a task ref in the project container. We need the task id not the reference id.
                        HPMUniqueID taskrefid = TaskCreateReturn.m_Tasks[0].m_TaskRefID;
                        HPMUniqueID taskid = m_VirtSession.TaskRefGetTask(taskrefid);


                        m_VirtSession.TaskSetOriginallyCreatedBy(taskid, m_ResourceID);
                        // When we set fully created the task becomes visible to users.
                        m_VirtSession.TaskSetFullyCreated(taskid);

                        // set the first workflow status
                        HPMProjectWorkflowSettings settings = m_VirtSession.ProjectWorkflowGetSettings(projectid, 0);
                        foreach (HPMProjectWorkflowObject workflow in settings.m_WorkflowObjects)
                        {
                            if (workflow.m_ObjectType == EHPMProjectWorkflowObjectType.EntryStatus)
                            {
                                HPMWorkflowProgressionStructure progessTo = m_VirtSession.ProjectUtilGetWorkflowProgression(projectid, 0, m_ResourceID, workflow.m_ObjectID);
                                if (progessTo.m_ProgressionStates.Length > 0)
                                {
                                    if (CanProgressToNewStatus(taskid, m_ResourceID, projectid, (int)progessTo.m_ProgressionStates[0].m_StatusID))
                                        m_VirtSession.TaskSetWorkflowStatus(taskid, (int)progessTo.m_ProgressionStates[0].m_StatusID, EHPMTaskSetStatusFlag.DoAutoAssignments | EHPMTaskSetStatusFlag.DoAutoCompletion);
                                }
                                break;
                            }
                        }
                        AddTask(taskrefid, projectid, project, dt, true);
                        GridView gView = GetGridView(project);

                        gView.PageIndex = gView.PageCount;
                        int taskOnPageIndex = (dt.Rows.Count - 1) % gView.PageSize;
                        if (taskOnPageIndex == 0)
                            gView.PageIndex++;
                        gView.SelectedIndex = taskOnPageIndex;
                        gView.EditIndex = taskOnPageIndex;
                        ShowNoItemSelectedText(project, false, "Editing " + Convert.ToString(taskid.m_ID));
                        MultilineTabsReadOnly(false, project);
                        SetDataSource(dt, project);
                        BindGrid(project, dt);
                    }
                }
                catch (HPMSdkException error)
                {
                    SetErrorMessage("Could not create task.", error.ErrorAsStr());
                }
                catch (HPMSdkManagedException error)
                {
                    SetErrorMessage("Could not create task.", error.ErrorAsStr());
                }
                finally
                {
                    m_VirtSession.ResourceImpersonate(m_NoUserID, EHPMDataHistoryClientOrigin.CustomSDK, m_NoMessage);
                }

            }

        }

        /// <summary>
        /// Gets values from Hansoft and updates data model.
        /// </summary>
        private void UpdateRow(HPMUniqueID taskID, HPMUniqueID projectID, HPMWIColumn column, DataRow drow, bool isForDisplay)
        {
            // get values for multi choice columns by their respective methods...
            string id = Convert.ToString((HPMUInt32)column.Column.m_ColumnID);
            if (column.Column.m_ColumnID == (int)EHPMProjectDefaultColumn.BugPriority)
            {
                drow[id] = Convert.ToInt32(m_VirtSession.TaskGetAgilePriorityCategory(taskID));
            }
            else if (column.Column.m_ColumnID == (int)EHPMProjectDefaultColumn.Risk)
            {
                drow[id] = Convert.ToInt32(m_VirtSession.TaskGetRisk(taskID));
            }
            else if (column.Column.m_ColumnID == (int)EHPMProjectDefaultColumn.Severity)
            {
                drow[id] = Convert.ToInt32(m_VirtSession.TaskGetSeverity(taskID));
            }
            else if (column.Column.m_ColumnID == (int)EHPMProjectDefaultColumn.Confidence)
            {
                drow[id] = Convert.ToInt32(m_VirtSession.TaskGetConfidence(taskID));
            }
            else if ((column.Column.m_ColumnType == EHPMColumnType.CustomColumn) && (column.Type == (int)EHPMProjectCustomColumnsColumnType.DropList))
            {
                string value = m_VirtSession.TaskGetCustomColumnData(taskID, (uint)column.Column.m_ColumnID);
                if (value == "")
                    drow[id] = 0;
                else
                    drow[id] = Convert.ToInt32(value);
            }
            else
            {
                // and use TaskRefGetColumnText to get formatted value for remaining columns
                HPMColumnTextOptions options = new HPMColumnTextOptions();
                options.m_bExpandResources = false;
                options.m_bDisplayUnits = isForDisplay;
                options.m_bForDisplay = isForDisplay;
                options.m_bMyWork = false;
                options.m_bNeedFullProjectPath = false;
                options.m_bOnlyFirstResource = false;
                options.m_bNeedSprintInSubProjectPath = false;
                options.m_bSeparateSubProjectPath = false;

                HPMUniqueID taskrefid = m_VirtSession.TaskGetMainReference(taskID);

                HPMString value = m_VirtSession.TaskRefGetColumnText(taskrefid, column.Column, options);
                drow[id] = value;
            }

        }

        /// <summary>
        /// Builds a new find context by combining text search field and report from report drop list
        /// </summary>
        private void UpdateFindContext(HPMUniqueID projectID, string project, string userAndReport, string search)
        {
            if ((userAndReport == "0$$0") || (userAndReport == "0"))
            {
                if (search.Length > 0)
                {
                    HPMFindContext fc = new HPMFindContext();
                    m_FindContexts[project] = m_VirtSession.UtilPrepareFindContext("Text(" + search + ")", projectID, EHPMReportViewType.AllBugsInProject, fc);
                }
            }
            else
            {
                string[] splitted = userAndReport.Split(new string[] { "$$" }, StringSplitOptions.None);

                HPMUniqueID reportuserid = new HPMUniqueID(Convert.ToInt32(splitted[0]));
                HPMUniqueID reportid = new HPMUniqueID(Convert.ToInt32(splitted[1]));

                HPMReport report = m_VirtSession.ProjectGetReport(projectID, reportuserid, reportid);


                HPMString FindString = m_VirtSession.UtilConvertReportToFindString(report, projectID, EHPMReportViewType.AllBugsInProject);
                if (search.Length > 0)
                    FindString = "Text(" + search + ") AND " + FindString;
                HPMFindContext fc = new HPMFindContext();
                m_FindContexts[project] = m_VirtSession.UtilPrepareFindContext(FindString, projectID, EHPMReportViewType.AllBugsInProject, fc);
            }
        }

    }
}
