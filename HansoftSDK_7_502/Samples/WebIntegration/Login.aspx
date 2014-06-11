<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Login.aspx.cs" Inherits="HansoftSDKSample_WebIntegration.Login" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head id="Head1" runat="server">

    <style type="text/css">
<!--
    form { margin: 0 0 18px; }
	
	label { display: block; font-size: 13px; font-weight: bold; line-height: 18px; }
	.lab  { display: block; font-size: 13px; font-weight: bold; line-height: 18px; }
	input.input-text, input.password, textarea, select,
	input[type=text], input[type=password] { display: block; background: #fff; margin: 3px; padding: 3px 4px; border: 1px solid #ccc; -moz-border-radius: 3px; -webkit-border-radius: 3px; -webkit-box-shadow: 0 1px 1px #fff; font: 13px/18px Arial, Helvetica, Verdana, sans-serif; }
	
	div#wrapper.simple	{ margin-top: 0; }
	div#container,
	div#disclaimer,
	div#errormessage,
	div.wrapper 		{ position: relative; width: 940px; margin: 0 auto; }
	div.errorwrapper 		{ position: relative; width: 940px; margin: 0 auto; }
	
	body { font-family: Arial, Helvetica, sans-serif; color: #414141; background: #eaeef0 url(../Images/HPMBackground.png) repeat-x;}
	div#wrapper { margin: 0; padding: 49px 0 36px; }
	div#container { background: #fff; width: 280px; padding: 29px; border: solid 1px #ccc; -webkit-border-radius: 6px; -moz-border-radius: 6px; -webkit-box-shadow: 0 3px 6px rgba(0,0,0,0.15); -moz-box-shadow: 0 3px 6px rgba(0,0,0,0.15); }
	div#disclaimer { background: #ffe6e6; width: 400px; padding: 29px; border: solid 1px #ccc; -webkit-border-radius: 6px; -moz-border-radius: 6px; -webkit-box-shadow: 0 3px 6px rgba(0,0,0,0.15); -moz-box-shadow: 0 3px 6px rgba(0,0,0,0.15); }
	div#errormessage { background: #ffe6e6; width: 400px; height: 100px; padding: 29px; border: solid 1px #ccc; -webkit-border-radius: 6px; -moz-border-radius: 6px; -webkit-box-shadow: 0 3px 6px rgba(0,0,0,0.15); -moz-box-shadow: 0 3px 6px rgba(0,0,0,0.15); }
	div#headerlogo { padding: 0 0 5px 0; }

-->
</style>  
    <title>Hansoft quality assurance/Version <% Response.Write(HansoftSDKSample_WebIntegration.Global.Version); %></title>
</head>
<body>

 <div id="wrapper">
  <div id="container">
	
	<div id="headerlogo">		
	<img src="Images/HPMLogo.png" alt="Hansoft logo"/>
	</div>
    <form id="login" runat="server">
    	
		<label for="ChannelList">Select authentication provider</label>
		<asp:dropdownlist ID="ChannelList" runat="server"></asp:dropdownlist>

      	<label for="UserNameField">Your name</label>
        <asp:TextBox ID="UserNameField" runat="server"></asp:TextBox>
        
      	<label for="PasswordField">Your password</label>
        <asp:TextBox ID="PasswordField" runat="server" TextMode="Password"></asp:TextBox>
    
       	<asp:Button ID="LoginButton" runat="server" Text="Login" OnClick="LoginButton_Click" />
    
    </form>
	</div>
</div>

<div id="errorwrapper" runat="server" Visible="False">
	<div id="errormessage">
        <asp:Label ID="ErrorMessage" runat="server" CssClass="lab"></asp:Label>
  </div>
</div>

<div id="wrapper">
	<div id="disclaimer">
    <label>DISCLAIMER. The Web Integration sample is provided as an example of how to write an integration with the Hansoft SDK. It is not intended to be used in a production environment without modifications. Please refer to README file in the sample's source directory for more information.</label>
    </div>
</div>

</body>
</html>
