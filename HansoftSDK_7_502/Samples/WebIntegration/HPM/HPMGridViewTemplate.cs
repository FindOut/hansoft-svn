using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

/// <summary>
/// Used to add dropdown lists and checkbox lists to GridView cells.
/// </summary>
public class HPMGridViewTemplate : ITemplate
{
    private ListItemType m_Mode;
    private string m_ColumnName;
    private string m_ID;
    private HPMGridViewTemplateType m_Type;
    private Dictionary<UInt32, string> m_Ddlds;
    private bool m_IsReadOnly;
    private bool m_IsNumeric;

    /// <summary>
    /// 
    /// </summary>
    /// <param name="mode">Tells us if we're in edit or display mode</param>
    /// <param name="type">The type of special control we're adding</param>
    /// <param name="colname">The display name of the column</param>
    /// <param name="id">The ID of the control we're adding</param>
    /// <param name="ddlds">A list of the values we want to bind to the created control</param>
    /// <param name="isReadOnly">True if this column is read only, false otherwise</param>
    /// <param name="isNumeric">True if this column is numeric, false otherwise</param>
    public HPMGridViewTemplate(ListItemType mode, HPMGridViewTemplateType type, string colname, string id, Dictionary<UInt32, string> ddlds, bool isReadOnly, bool isNumeric)
    {
        m_Mode = mode;
        m_ColumnName = colname;
        m_ID = id;
        m_Type = type;
        m_Ddlds = ddlds;
        m_IsReadOnly = isReadOnly;
        m_IsNumeric = isNumeric;
    }

    public bool IsNumeric
    {
        get
        {
            return m_IsNumeric;
        }
    }

    public HPMGridViewTemplateType Type
    {
        get
        {
            return m_Type;
        }
    }

    public void InstantiateIn(System.Web.UI.Control container)
    {
        switch (m_Mode)
        {
            case ListItemType.Item:
                {
                    Label descriptionLabel = new Label();
                    descriptionLabel.ID = m_ID;
                    descriptionLabel.Text = String.Empty;
                    descriptionLabel.DataBinding += new EventHandler(OnDataBinding);
                    container.Controls.Add(descriptionLabel);
                }
                break;
            case ListItemType.EditItem:
                {
                    if (m_IsReadOnly)
                    {
                        Label descriptionLabel = new Label();
                        descriptionLabel.ID = m_ID;
                        descriptionLabel.Text = String.Empty;
                        descriptionLabel.DataBinding += new EventHandler(OnDataBinding);
                        container.Controls.Add(descriptionLabel);
                    }
                    else
                    {
                        if (m_Type == HPMGridViewTemplateType.DropDownList)
                        {
                            DropDownList ddl = new DropDownList();
                            ddl.ID = m_ID;

                            ddl.DataTextField = "Value";
                            ddl.DataValueField = "Key";
                            ddl.DataSource = m_Ddlds;
                            ddl.DataBind();
                            ddl.DataBinding += new System.EventHandler(OnDataBinding);
                            container.Controls.Add(ddl);
                        }
                        else if (m_Type == HPMGridViewTemplateType.CheckBoxList)
                        {
                            ListBox lb = new ListBox();
                            lb.SelectionMode = ListSelectionMode.Multiple;
                            lb.DataTextField = "Value";
                            lb.DataValueField = "Key";
                            lb.ID = m_ID;
                            lb.DataSource = m_Ddlds;
                            lb.AutoPostBack = false;
                            lb.DataBind();
                            lb.DataBinding += new System.EventHandler(OnDataBinding);
                            container.Controls.Add(lb);
                        }
                        else
                        {
                            TextBox descriptionBox = new TextBox();
                            descriptionBox.ID = m_ID;
                            descriptionBox.Text = String.Empty;
                            descriptionBox.DataBinding += new EventHandler(OnDataBinding);
                            container.Controls.Add(descriptionBox);
                        }
                    }
                }
                break;
        }
    }



    private void OnDataBinding(object sender, EventArgs e)
    {
        object boundValueObj = null;
        Control ctrl = (Control)sender;
        IDataItemContainer dataItemContainer =
        (IDataItemContainer)ctrl.NamingContainer;
        boundValueObj = DataBinder.Eval(dataItemContainer.DataItem, m_ColumnName);

        switch (m_Mode)
        {
            case ListItemType.Item:
                {
                    Label lbl = (Label)sender;
                    if (m_IsNumeric)
                    {
                        uint index = Convert.ToUInt32(boundValueObj);
                        if (index == 0)
                            lbl.Text = "";
                        else
                        {
                            string value;
                            if (m_Ddlds.TryGetValue(index, out value))
                                lbl.Text = value;
                            else
                                lbl.Text = "";
                        }
                    }
                    else
                        lbl.Text = boundValueObj.ToString();
                }
                break;
            case ListItemType.EditItem:
                if (m_IsReadOnly)
                {
                    Label lbl = (Label)sender;
                    lbl.Text = boundValueObj.ToString();
                }
                else
                {
                    if (m_Type == HPMGridViewTemplateType.DropDownList)
                    {
                        DropDownList ddl = sender as DropDownList;
 
                        if (m_IsNumeric)
                        {
                            string select = Convert.ToString(boundValueObj);
                            ListItem item = ddl.Items.FindByValue(select);
                            int index = ddl.Items.IndexOf(item);
                            ddl.SelectedIndex = index;
                        }
                        else
                        {
                            string select = boundValueObj as string;
                            ListItem item = ddl.Items.FindByText(select);
                            if (item != null)
                            {
                                ddl.SelectedIndex = ddl.Items.IndexOf(item);
                            }
                        }
                    }
                    else if (m_Type == HPMGridViewTemplateType.CheckBoxList)
                    {
                        // doesn't work. Hack in row edit handler in Default.aspx.cs instead  
                    }
                    else
                    {
                        TextBox textbox = sender as TextBox;
                        textbox.Text = boundValueObj.ToString();
                    }
                }
                break;
        }
    }
}
