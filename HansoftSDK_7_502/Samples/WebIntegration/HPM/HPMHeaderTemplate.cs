using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

/// <summary>
/// Custom header template for GridView header.
/// </summary>
public class HPMHeaderTemplate : ITemplate
{
    private ListItemType m_Type;
    private string m_Name;

    public HPMHeaderTemplate(ListItemType type, string name)
    {
        m_Type = type;
        m_Name = name;
    }
    public void InstantiateIn(Control container)
    {
        switch (m_Type)
        {
            case ListItemType.Header:
                {
                    container.Controls.Add(new LiteralControl("<div>"));
                    // First Add the Image Button
                    ImageButton imageButton = new ImageButton();
                    imageButton.ID = m_Name;
                    imageButton.ImageUrl = "Images/HPMProject.png";
                    container.Controls.Add(imageButton);
                    container.Controls.Add(new LiteralControl("<div>"));
                    // Then add the Tab Label
                    container.Controls.Add(new LiteralControl(m_Name));
                    container.Controls.Add(new LiteralControl("</div></div>"));
                }
                break;
            case ListItemType.Item:
                break;
        }
    }
}

