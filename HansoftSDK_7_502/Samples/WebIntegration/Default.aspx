<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="HansoftSDKSample_WebIntegration._Default" validateRequest="false" MaintainScrollPositionOnPostback="true"  %>

<%@ Register assembly="AjaxControlToolkit" namespace="AjaxControlToolkit" tagprefix="cc1" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<script runat="Server">
    public void LogoutLink_OnClick(object sender, EventArgs args)
    {
        FormsAuthentication.SignOut();
        FormsAuthentication.RedirectToLoginPage();
    }
        
</script>
<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <link href="Styles/style.css" rel="stylesheet" type="text/css" />
    <title>Hansoft quality assurance/Version <% Response.Write(HansoftSDKSample_WebIntegration.Global.Version); %> - <% Response.Write(Request.Cookies["hansoftuser"].Value); %></title>
</head>
<body>
    
    
    <form ID="form1" runat="server">
    
    <div id="wrapper">
    <p class="alignleft">
    <img src="Images/HPMLogo.png" alt="Hansoft logo"/>
    </p>
    
    <p class="alignright">
    <asp:LinkButton id="LogoutLink" Text="Logout" 
                      OnClick="LogoutLink_OnClick" runat="server" /><br />
   </p>
    
    <div style="clear: both;"></div>
    
    <asp:Label ID="ErrorLabel" runat="Server" CssClass="errormessage"></asp:Label>
    
   <div id="upd">
    <asp:ScriptManager ID="ScriptManager1" EnablePartialRendering="true" runat="server" />
       
    <asp:UpdatePanel ID="UpdatePanel1" UpdateMode="Conditional" runat="server">
        <ContentTemplate>
        <asp:Timer ID="Timer1" runat="server" OnTick="Timer_Tick">
       </asp:Timer>
        </ContentTemplate>
    </asp:UpdatePanel>
    </div>
    </div>
    
    </form>
</body>
</html>
    