HANSOFT SDK WEB INTEGRATION SAMPLE
The SDK Web Integration sample is provided as an example of how to use the Hansoft SDK to write integrations with other system in general and
the web in particular. It is not intended to be used out of the box in a production environment and has not been tested for that usage. It
is not optimized and contains several solutions that need to be tweaked if used in a large scale web deployment.

CONFIGURATION
There are seven configuration parameters that can be changed in the Web.config file:
	hpmhost, the host where the Hansoft server runs
	hpmport, the port that the Hansoft server listens to
	hpmdatabase, the name of the Hansoft database to connect to
	sdkuser, the name of the SDK user that the SDK session can connect with. Note that you need a unique SDK user for every SDK integration you connect with
	sdkpassword, the password of the SDK user
	sdknumsessions, number of sessions in the SDK session pool, see below
	bugsperpage,  number of bugs per page in the ASP.NET GridView that displays the bugs

THE BUILTIN SDK SESSION POOL
The SDK SessionOpen() operation is expensive since it download and caches the Hansoft database locally. This is of course not an optimal solution for a
web integration so you need to pre create a number of SDK sessions and keep them in a pool. Since Hansoft 6 there is a built in SDK session pool available
in the SDK. Just set the number of session parameter of SessionOpen to a number larger than 0 to initialize it. You then use SessionOpenVirtual() to get a 
handle into the pool. Every SDK call on the virtual session then uses a cached session from the pool. The session is returned to the pool after the call
is done. See how this is done in HPMWISdkSession.cs and Default.aspx.cs. 

SOLUTION
In short the integration reads all bugs from all projects that are available to the logged in user and caches them in an ASP.NET data model, a DataTable.
In a real world solution you should probably roll you own custom data model for greater flexibility and more streamlined code. You should also do more
lazy loading of the Hansoft data. After that data model is populated, it is bound to ASP.NET GridView for display.

If changes are made in Hansoft, the notifications are handled globally by Global.asax.cs and stored in the Session. When the Ajax UpdatePanel is refreshed by
a client timer, the updated data is changed in the correct DataTable.

The user can select what bugs are visible by selecting a Hansoft report in a drop down list. This is an example how to use reports from the SDK.

REQUIREMENTS
The integration requires the Ajax Control Kit. It has been tested with version 30930 that is available for download here
http://ajaxcontroltoolkit.codeplex.com/releases/view/33804. 

It has been developed and tested with ASP.NET 3.5.

COMPATABILITY
The web integration has been tested in Safari 4, Google Chrome 4, Mozilla Firefox 3.6 and Internet Explorer 8. The layout has not been tested
extensively under different resolutions so you might have to tweak the CSS style sheet that you can find in the Styles directory.

MISSING FUNCTIONALITY
The web integration does not take the detailed access and restriction rules into account. See ProjectGetDetailedAccessRules() for more information.

Functionality for attached documents. See TaskSetAttachedDocuments()/TaskGetAttachedDocuments.
