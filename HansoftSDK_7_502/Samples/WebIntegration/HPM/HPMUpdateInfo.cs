#if (PLATFORM_X64)
extern alias HPMSdkx64;
using HPMSdkx64::HPMSdk;
#else
extern alias HPMSdkx86;
using HPMSdkx86::HPMSdk;
#endif

using System;
using System.Collections.Generic;

/// <summary>
/// Stores information of updated tasks. Used by callback handlers in Global.aspx.cs and by Default.aspx.cs to determine if tasks/projects needs to be updated in AJAX UpdatePanel.
/// </summary>
public class HPMUpdateInfo
{
    private Dictionary<Int32, HPMUniqueID> m_UpdatedTasks;
    private Dictionary<Int32, HPMUniqueID> m_DeletedTasks;
    private Dictionary<Int32, HPMUniqueID> m_CreatedTasks;
    private List<HPMUniqueID> m_UpdatedProjects;
    private List<HPMUniqueID> m_DeletedProjects;
    private List<HPMUniqueID> m_CreatedProjects;
    private bool m_FullUpdate;

    public HPMUpdateInfo()
    {
        m_UpdatedTasks = new Dictionary<Int32, HPMUniqueID>();
        m_CreatedTasks = new Dictionary<Int32, HPMUniqueID>();
        m_DeletedTasks = new Dictionary<Int32, HPMUniqueID>();
        m_UpdatedProjects = new List<HPMUniqueID>();
        m_CreatedProjects = new List<HPMUniqueID>();
        m_DeletedProjects = new List<HPMUniqueID>();
        m_FullUpdate = false;
    }

    /// <summary>
    /// Dictionary with the unique identifiers of tasks that have been updated. 
    /// </summary>
    public Dictionary<Int32, HPMUniqueID> UpdatedTasks
    {
        get
        {
            return m_UpdatedTasks;
        }
    }

    /// <summary>
    /// Dictionary with the unique identifiers of tasks that have been created. 
    /// </summary>
    public Dictionary<Int32, HPMUniqueID> CreatedTasks
    {
        get
        {
            return m_CreatedTasks;
        }
    }

    /// <summary>
    /// Dictionary with the unique identifiers of tasks that have been deleted. 
    /// </summary>
    public Dictionary<Int32, HPMUniqueID> DeletedTasks
    {
        get
        {
            return m_DeletedTasks;
        }
    }

    /// <summary>
    /// List with the unique identifiers of projects that have been updated. Currently not used, use FullUpdate instead.
    /// </summary>
    public List<HPMUniqueID> UpdatedProjects
    {
        get
        {
            return m_UpdatedProjects;
        }
    }

    /// <summary>
    /// List with the unique identifiers of projects that have been created. Currently not used, use FullUpdate instead.
    /// </summary>
    public List<HPMUniqueID> CreatedProjects
    {
        get
        {
            return m_CreatedProjects;
        }
    }

    /// <summary>
    /// List with the unique identifiers of projects that have been deleted. Currently not used, use FullUpdate instead.
    /// </summary>
    public List<HPMUniqueID> DeletedProjects
    {
        get
        {
            return m_DeletedProjects;
        }
    }

    /// <summary>
    /// True if a full update is needed, false otherwise.
    /// </summary>
    public bool FullUpdate
    {
        get
        {
            return m_FullUpdate;
        }

        set
        {
            m_FullUpdate = value;
        }
    }
}