#if (PLATFORM_X64)
extern alias HPMSdkx64;
using HPMSdkx64::HPMSdk;
#else
extern alias HPMSdkx86;
using HPMSdkx86::HPMSdk;
#endif

using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Security;
using System.Web.SessionState;

namespace HansoftSDKSample_WebIntegration
{
    /// <summary>
    /// Global.aspx.cs is used to create the UpdateInfo and store in the Session when the application start. UpdateInfo is updated with info from the event handlers.
    /// </summary>
    public class Global : System.Web.HttpApplication
    {
        private static string m_Version;

        protected void Application_Start(object sender, EventArgs e)
        {
            Application["sessions"] = new List<HttpSessionState>();
            AddEventHandlers();
            m_Version = Convert.ToString((uint)EHPMSDK.Version, 16) + "/6.700";
        }

        protected void Session_Start(object sender, EventArgs e)
        {
            Session["updateinfo"] = new HPMUpdateInfo();
            var sessions = (List<HttpSessionState>)Application["sessions"];
            sessions.Add(Session);
            
        }

        protected void Application_BeginRequest(object sender, EventArgs e)
        {

        }

        protected void Application_AuthenticateRequest(object sender, EventArgs e)
        {

        }

        protected void Application_Error(object sender, EventArgs e)
        {

        }

        protected void Session_End(object sender, EventArgs e)
        {
            var sessions = (List<HttpSessionState>)Application["sessions"];
            sessions.Remove(Session);
        }

        protected void Application_End(object sender, EventArgs e)
        {

        }

        private void AddEventHandlers()
        {
            try
            {
                HPMWISdkSession session = HPMWISdkSession.Instance;
                session.Callback.TaskChangeEvent += new HPMWISdkCallback.TaskChangeEventHandler(HPM_TaskChanged);
                session.Callback.TasksCreateEvent += new HPMWISdkCallback.TasksCreateEventHandler(HPM_TasksCreated);
                session.Callback.TaskDeleteEvent += new HPMWISdkCallback.TaskDeleteEventHandler(HPM_TaskDeleted);
                session.Callback.ProjectCreateEvent += new HPMWISdkCallback.ProjectCreateEventHandler(HPM_ProjectCreated);
                session.Callback.ProjectDeleteEvent += new HPMWISdkCallback.ProjectDeleteEventHandler(HPM_ProjectDeleted);
                session.Callback.TaskChangeCustomColumnDataEvent += new HPMWISdkCallback.TaskChangeCustomColumnDataEventHandler(HPM_CustomColumnChanged);
                session.Callback.ProjectPropertiesChangeEvent += new HPMWISdkCallback.ProjectPropertiesChangeEventHandler(HPM_ProjectPropertiesChanged);
                session.Callback.ProjectCustomColumnsChangeEvent += new HPMWISdkCallback.ProjectCustomColumnsChangeEventHandler(HPM_CustomColumnsChanged);
                session.Callback.ProjectCustomColumnsCreateEvent += new HPMWISdkCallback.ProjectCustomColumnsCreateEventHandler(HPM_CustomColumnsCreated);
                session.Callback.ProjectWorkflowChangeEvent += new HPMWISdkCallback.ProjectWorkflowChangeEventHandler(HPM_WorkflowChanged);
                session.Callback.ProjectReportsChangeEvent += new HPMWISdkCallback.ProjectReportsChangeEventHandler(HPM_ReportsChanged);

            }
            catch (HPMSdkException)
            {
                
            }
            catch (HPMSdkManagedException)
            {
               
            }
        }

        private void UpdateProject(HPMUniqueID projectID)
        {
            var sessions = (List<HttpSessionState>)Application["sessions"];

            foreach (var session in sessions)
            {
                HPMUpdateInfo updateinfo = session["updateinfo"] as HPMUpdateInfo;
                updateinfo.UpdatedProjects.Add(projectID);
                updateinfo.FullUpdate = true;
            }
            
        }

        private void UpdateTask(HPMUniqueID taskID)
        {
            var sessions = (List<HttpSessionState>)Application["sessions"];

            foreach (var session in sessions)
            {
                HPMUpdateInfo updateinfo = session["updateinfo"] as HPMUpdateInfo;

                try
                {
                    updateinfo.UpdatedTasks.Add(taskID.m_ID, taskID);
                }
                catch (ArgumentException)
                {
                }
            }
        }

        protected void HPM_TaskChanged(Object sender, TaskChangeEventArgs e)
        {
            UpdateTask(e.data.m_TaskID);
        }

        protected void HPM_TaskDeleted(Object sender, TaskDeleteEventArgs e)
        {
            var sessions = (List<HttpSessionState>)Application["sessions"];

            foreach (var session in sessions)
            {
                HPMUpdateInfo updateinfo = session["updateinfo"] as HPMUpdateInfo;
                try
                {
                    updateinfo.DeletedTasks.Add(e.data.m_TaskID.m_ID, e.data.m_TaskID);
                }
                catch (ArgumentException)
                {
                }
            }
        }

        protected void HPM_TasksCreated(Object sender, TasksCreateEventArgs e)
        {
            var sessions = (List<HttpSessionState>)Application["sessions"];

            foreach (var session in sessions)
            {
                HPMUpdateInfo updateinfo = session["updateinfo"] as HPMUpdateInfo;

                foreach (HPMChangeCallbackData_TaskCreateUnifiedTask createdTask in e.data.m_Tasks)
                {
                    try
                    {
                        updateinfo.CreatedTasks.Add(createdTask.m_TaskRefID.m_ID, createdTask.m_TaskRefID);
                    }
                    catch (ArgumentException)
                    {
                    }
                    
                }
            }
        }

        protected void HPM_ProjectCreated(Object sender, ProjectCreateEventArgs e)
        {
            var sessions = (List<HttpSessionState>)Application["sessions"];

            foreach (var session in sessions)
            {
                HPMUpdateInfo updateinfo = session["updateinfo"] as HPMUpdateInfo;
                updateinfo.CreatedProjects.Add(e.data.m_ProjectID);
                updateinfo.FullUpdate = true;
            }
        }

        protected void HPM_ProjectDeleted(Object sender, ProjectDeleteEventArgs e)
        {
            var sessions = (List<HttpSessionState>)Application["sessions"];

            foreach (var session in sessions)
            {
                HPMUpdateInfo updateinfo = session["updateinfo"] as HPMUpdateInfo;
                updateinfo.DeletedProjects.Add(e.data.m_ProjectID);
                updateinfo.FullUpdate = true;
            }
        }

        protected void HPM_CustomColumnChanged(Object sender, TaskChangeCustomColumnDataEventArgs e)
        {
            UpdateTask(e.data.m_TaskID);
        }

        protected void HPM_ProjectPropertiesChanged(Object sender, ProjectPropertiesChangeEventArgs e)
        {
            UpdateProject(e.data.m_ProjectID);
        }

        protected void HPM_CustomColumnsChanged(Object sender, ProjectCustomColumnsChangeEventArgs e)
        {
            UpdateProject(e.data.m_ProjectID);
        }

        protected void HPM_CustomColumnsCreated(Object sender, ProjectCustomColumnsCreateEventArgs e)
        {
            UpdateProject(e.data.m_ProjectID);
        }

        protected void HPM_WorkflowChanged(Object sender, ProjectWorkflowChangeEventArgs e)
        {
            UpdateProject(e.data.m_ProjectID);
        }

        protected void HPM_ReportsChanged(Object sender, ProjectReportsChangeEventArgs e)
        {
            UpdateProject(e.data.m_ProjectID);
        }

        public static string Version
        {
            get
            {
                return m_Version;
            }
        }
    }
}