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

/// <summary>
/// Holds a HPM HPMColumn and the value type of the elements in that column.
/// </summary>
public class HPMWIColumn
{
    private HPMColumn m_Column;
    private int m_Type;

    public HPMWIColumn(HPMColumn column, int type)
    {
        m_Column = column;
        m_Type = type;
    }

    public HPMColumn Column
    {
        get
        {
            return m_Column;
        }
    }

    public int Type
    {
        get
        {
            return m_Type;
        }
    }
}

