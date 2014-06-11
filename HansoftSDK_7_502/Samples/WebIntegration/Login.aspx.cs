#if (PLATFORM_X64)
extern alias HPMSdkx64;
using HPMSdkx64::HPMSdk;
#else
extern alias HPMSdkx86;
using HPMSdkx86::HPMSdk;
#endif

using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Security;
using System.Web.UI;
using System.Web.UI.WebControls;

using HPMString = System.String;
using HPMUInt64 = System.UInt64;

namespace HansoftSDKSample_WebIntegration
{
    /// <summary>
    /// Handles login to a Hansoft database. The name of the database is set in Web.config. The login gets a list of all avalible authentication methods, e.g. Hansoft database or LDAP and displays them in a dropdown. The user is then authenticated against that authenticator.
    /// </summary>
    public partial class Login : System.Web.UI.Page
    {
        HPMSdkSession m_SDKSession;
        HPMSdkSession m_VirtSession;

        protected void Page_Load(object sender, EventArgs e)
        {
            try
            {
                InitHansoftVirtualSession();
                
                if (!IsPostBack)
                {
                    AddChannels();
                }
            }
            catch (HPMSdkException error)
            {
                SetErrorMessage("Error in communication with Hansoft.", error.ErrorAsStr());
            }
            catch (HPMSdkManagedException error)
            {
                SetErrorMessage("Error in communication with Hansoft.", error.ErrorAsStr());
            }
            
        }

        private void InitHansoftVirtualSession()
        {     
            HPMWISdkSession session = HPMWISdkSession.Instance;

            m_SDKSession = session.Session;
            // get virtual session to use the SDK's built in session pool
            m_VirtSession = HPMSdkSession.SessionOpenVirtual(ref m_SDKSession);
        }

        private void AddChannels() 
        {
            // The communication channels are the available authentication methods, eg Hansoft database or LDAP
            HPMCommunicationChannelEnum channels = m_VirtSession.CommunicationChannelEnum("");

            foreach (HPMCommunicationChannelProperties channelProps in channels.m_Channels)
            {
                if ((channelProps.m_Flags & EHPMChannelFlag.SupportsResolveCredentials) > 0) 
                {
                    ChannelList.Items.Add(new ListItem(channelProps.m_Description, Convert.ToString(channelProps.m_OwnerSessionID)));
                }
            }
        }

        private void SetErrorMessage(string error, string cause)
        {
            ErrorMessage.Text = error + " " + cause;
            errorwrapper.Visible = true;
        }

        protected void LoginButton_Click(object sender, EventArgs e)
        {
            errorwrapper.Visible = false;

            HPMCredentialResolutionSessionIDsEnum sessionIDs = new HPMCredentialResolutionSessionIDsEnum();
            Array.Resize(ref sessionIDs.m_SessionIDs, 1);
            HPMString user = UserNameField.Text;
            HPMString password = PasswordField.Text;
            sessionIDs.m_SessionIDs[0] = Convert.ToUInt64(ChannelList.SelectedItem.Value);

            HPMUniqueID userID = new HPMUniqueID(-1);
            try
            {
                HPMChangeCallbackData_AuthenticationResolveCredentialsResponse response = m_VirtSession.AuthenticationResolveCredentialsBlock(user, password, sessionIDs);
                userID = response.m_ResourceID;

                if (userID.m_ID == -1)
                {
                    SetErrorMessage("Could not authenticate user", "");
                }
                HPMSdkSession.SessionDestroy(ref m_VirtSession);
            }
            catch (HPMSdkException error)
            {
                SetErrorMessage("Could not authenticate user", error.ErrorAsStr());
            }
            catch (HPMSdkManagedException error)
            {
                SetErrorMessage("Could not authenticate user", error.ErrorAsStr());
            }

            if (userID != -1)
            {
                HttpCookie aCookie = new HttpCookie("hansoftuser");
                
                aCookie.Value = user;
                Response.Cookies.Add(aCookie);
                FormsAuthentication.RedirectFromLoginPage(Convert.ToString(userID.m_ID), false);
            }
        }

    }
}
