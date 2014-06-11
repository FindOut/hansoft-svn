#if (PLATFORM_X64)
extern alias HPMSdkx64;
using HPMSdkx64::HPMSdk;
#else
extern alias HPMSdkx86;
using HPMSdkx86::HPMSdk;
#endif

using System;

/// <summary>
/// Callback handlers for all HPM callback we are interested in. Callbacks are converted into ASP events to simplify things.
/// </summary>
public class TaskChangeEventArgs : EventArgs
{
    public HPMChangeCallbackData_TaskChange data;
    public TaskChangeEventArgs(HPMChangeCallbackData_TaskChange data)
    {
        this.data = data;
    }
}

public class TasksCreateEventArgs : EventArgs
{
    public HPMChangeCallbackData_TaskCreateUnified data;
    public TasksCreateEventArgs(HPMChangeCallbackData_TaskCreateUnified data)
    {
        this.data = data;
    }
}

public class ProjectCreateEventArgs : EventArgs
{
    public HPMChangeCallbackData_ProjectCreate data;
    public ProjectCreateEventArgs(HPMChangeCallbackData_ProjectCreate data)
    {
        this.data = data;
    }
}

public class ProjectDeleteEventArgs : EventArgs
{
    public HPMChangeCallbackData_ProjectDelete data;
    public ProjectDeleteEventArgs(HPMChangeCallbackData_ProjectDelete data)
    {
        this.data = data;
    }
}

public class TaskDeleteEventArgs : EventArgs
{
    public HPMChangeCallbackData_TaskDelete data;
    public TaskDeleteEventArgs(HPMChangeCallbackData_TaskDelete data)
    {
        this.data = data;
    }
}

public class TaskChangeCustomColumnDataEventArgs : EventArgs
{
    public HPMChangeCallbackData_TaskChangeCustomColumnData data;
    public TaskChangeCustomColumnDataEventArgs(HPMChangeCallbackData_TaskChangeCustomColumnData data)
    {
        this.data = data;
    }
}

public class ProjectPropertiesChangeEventArgs : EventArgs
{
    public HPMChangeCallbackData_ProjectPropertiesChange data;
    public ProjectPropertiesChangeEventArgs(HPMChangeCallbackData_ProjectPropertiesChange data)
    {
        this.data = data;
    }
}

public class ProjectCustomColumnsChangeEventArgs : EventArgs
{
    public HPMChangeCallbackData_ProjectCustomColumnsChange data;
    public ProjectCustomColumnsChangeEventArgs(HPMChangeCallbackData_ProjectCustomColumnsChange data)
    {
        this.data = data;
    }
}

public class ProjectCustomColumnsCreateEventArgs : EventArgs
{
    public HPMChangeCallbackData_ProjectCustomColumnsCreate data;
    public ProjectCustomColumnsCreateEventArgs(HPMChangeCallbackData_ProjectCustomColumnsCreate data)
    {
        this.data = data;
    }
}

public class ProjectWorkflowChangeEventArgs : EventArgs
{
    public HPMChangeCallbackData_ProjectWorkflowChange data;
    public ProjectWorkflowChangeEventArgs(HPMChangeCallbackData_ProjectWorkflowChange data)
    {
        this.data = data;
    }
}

public class ProjectReportsChangeEventArgs : EventArgs
{
    public HPMChangeCallbackData_ProjectReportsChange data;
    public ProjectReportsChangeEventArgs(HPMChangeCallbackData_ProjectReportsChange data)
    {
        this.data = data;
    }
}

public class HPMWISdkCallback : HPMSdkCallbacks
{
    
    public override void On_ProcessError(EHPMError error)
    {

    }
    
    public delegate void TaskChangeEventHandler(object sender, TaskChangeEventArgs args);
    public event TaskChangeEventHandler TaskChangeEvent;
    public override void On_TaskChange(HPMChangeCallbackData_TaskChange data)
    {
        TaskChangeEventArgs dataArgs = new TaskChangeEventArgs(data);
        TaskChangeEvent(this, dataArgs);
    }

    public delegate void TasksCreateEventHandler(object sender, TasksCreateEventArgs args);
    public event TasksCreateEventHandler TasksCreateEvent;
    public override void On_TaskCreateUnified(HPMChangeCallbackData_TaskCreateUnified data)
    {
        TasksCreateEventArgs dataArgs = new TasksCreateEventArgs(data);
        TasksCreateEvent(this, dataArgs);
    }

    public delegate void ProjectCreateEventHandler(object sender, ProjectCreateEventArgs args);
    public event ProjectCreateEventHandler ProjectCreateEvent;
    public override void On_ProjectCreate(HPMChangeCallbackData_ProjectCreate data)
	{
        ProjectCreateEventArgs dataArgs = new ProjectCreateEventArgs(data);
        ProjectCreateEvent(this, dataArgs);
	}

    public delegate void ProjectDeleteEventHandler(object sender, ProjectDeleteEventArgs args);
    public event ProjectDeleteEventHandler ProjectDeleteEvent;
	public override void On_ProjectDelete(HPMChangeCallbackData_ProjectDelete data)
	{
        ProjectDeleteEventArgs dataArgs = new ProjectDeleteEventArgs(data);
        ProjectDeleteEvent(this, dataArgs);
	}

    public delegate void TaskDeleteEventHandler(object sender, TaskDeleteEventArgs args);
    public event TaskDeleteEventHandler TaskDeleteEvent;
	public override void On_TaskDelete(HPMChangeCallbackData_TaskDelete data)
	{
        TaskDeleteEventArgs dataArgs = new TaskDeleteEventArgs(data);
        TaskDeleteEvent(this, dataArgs);
	}

    public delegate void TaskChangeCustomColumnDataEventHandler(object sender, TaskChangeCustomColumnDataEventArgs args);
    public event TaskChangeCustomColumnDataEventHandler TaskChangeCustomColumnDataEvent;
	public override void On_TaskChangeCustomColumnData(HPMChangeCallbackData_TaskChangeCustomColumnData data)
	{
        TaskChangeCustomColumnDataEventArgs dataArgs = new TaskChangeCustomColumnDataEventArgs(data);
        TaskChangeCustomColumnDataEvent(this, dataArgs);
	}

    public delegate void ProjectPropertiesChangeEventHandler(object sender, ProjectPropertiesChangeEventArgs args);
    public event ProjectPropertiesChangeEventHandler ProjectPropertiesChangeEvent;
	public override void On_ProjectPropertiesChange(HPMChangeCallbackData_ProjectPropertiesChange data)
	{
        ProjectPropertiesChangeEventArgs dataArgs = new ProjectPropertiesChangeEventArgs(data);
        ProjectPropertiesChangeEvent(this, dataArgs);
	}

    public delegate void ProjectCustomColumnsChangeEventHandler(object sender, ProjectCustomColumnsChangeEventArgs args);
    public event ProjectCustomColumnsChangeEventHandler ProjectCustomColumnsChangeEvent;
	public override void On_ProjectCustomColumnsChange(HPMChangeCallbackData_ProjectCustomColumnsChange data)
	{
        ProjectCustomColumnsChangeEventArgs dataArgs = new ProjectCustomColumnsChangeEventArgs(data);
        ProjectCustomColumnsChangeEvent(this, dataArgs);
	}

    public delegate void ProjectCustomColumnsCreateEventHandler(object sender, ProjectCustomColumnsCreateEventArgs args);
    public event ProjectCustomColumnsCreateEventHandler ProjectCustomColumnsCreateEvent;
	public override void On_ProjectCustomColumnsCreate(HPMChangeCallbackData_ProjectCustomColumnsCreate data)
	{
        ProjectCustomColumnsCreateEventArgs dataArgs = new ProjectCustomColumnsCreateEventArgs(data);
        ProjectCustomColumnsCreateEvent(this, dataArgs);
	}

    public delegate void ProjectWorkflowChangeEventHandler(object sender, ProjectWorkflowChangeEventArgs args);
    public event ProjectWorkflowChangeEventHandler ProjectWorkflowChangeEvent;
	public override void On_ProjectWorkflowChange(HPMChangeCallbackData_ProjectWorkflowChange data)
	{
        ProjectWorkflowChangeEventArgs dataArgs = new ProjectWorkflowChangeEventArgs(data);
        ProjectWorkflowChangeEvent(this, dataArgs);
	}

    public delegate void ProjectReportsChangeEventHandler(object sender, ProjectReportsChangeEventArgs args);
    public event ProjectReportsChangeEventHandler ProjectReportsChangeEvent;
	public override void On_ProjectReportsChange(HPMChangeCallbackData_ProjectReportsChange data)
	{
        ProjectReportsChangeEventArgs dataArgs = new ProjectReportsChangeEventArgs(data);
        ProjectReportsChangeEvent(this, dataArgs);
	}
}