// CustomPluginImpl.cpp  

#include "stdafx.h"
#include "resource.h"
#include "TrajectoryControl.h"
#include "Mach4View.h"
#include "Engine.h"
#include "rs274ngc.h"
#include "XMLProfile.h"

#include "CustomPluginImpl.h"
#include "PluginTestDlg.h"
#include "Mach3ObjectModel.h"
#include "Utility.h"
#include "dbg.h"

#include <mmsystem.h>
#include <math.h> 

#include "QtWsTransport.h"
#include "CMyScriptObject.h"

HWND mach3Wnd;
CWnd mach3CWnd;

CPluginTestDlg *dlg;

extern CMyScriptObject scripter;
QtWsTransport * g_pluginRemote;
// ===========================================================================
// 
// Global variables for this code 
//
// ===========================================================================

extern CMach4View *MachView;
 
//============================================================================
//
// Here are the routines which are called by Mach3
// They are the core of every plugin
//
//============================================================================

//----------------------------------------------------------------------------

// Used for destruction of variables prior to exit.
// Called as Mach3 shuts down. 

void myCleanUp()

{
	DbgMsg(("myCleanUp entry"));

	Mach3ObjectModelShutdown();

	dlg->DestroyWindow();

	mach3CWnd.Detach();

	delete dlg;

	delete g_pluginRemote;

	DbgMsg(("myCleanUp exit"));
}

//----------------------------------------------------------------------------

// initial access to Mach profile when enumerating available plugins
// Returns the second half on the "pluging id" for the list in Operator
// CustomPlugin adds the file name at the start of the string

CString	myProfileInit(CString name, CXMLProfile *DevProf)	

{
	DbgMsg(("myProfileInit entry"));

	//this gets the default directory DefDir in which Mach3 is located.  and the profile name ex. "Mach3Mill"
	//DefDir = DevProf->GetProfileString("Preferences","DefDir","C:\\Mach3\\");
    //Profile = DevProf->GetProfileString("Preferences","Profile","Mach3Mill");

	DbgMsg(("myProfileInit exit"));

	return(" CustomPlugintype PlugIn - James W. Leonard Ver 1.0");
}

//----------------------------------------------------------------------------

// called during Mach initialisation. You can influence subsequent init by actions here
// **** Not used in typical device plugin

void myInitControl()

{
	DbgMsg(("myInitControl entry"));


	DbgMsg(("myInitControl exit"));
}

//----------------------------------------------------------------------------

void myPostInitControl()

{
	// called when mach fully set up so all data can be
	// used but initialization outcomes are not affected

	DbgMsg(("myPostInitControl entry"));

	#ifndef _DEBUG

	RelMsg(("Release build CustomPlugin"));

	#endif

	mach3Wnd = GetMach3MainWindow();

	mach3CWnd.Attach(mach3Wnd);

	dlg = new CPluginTestDlg;

	dlg->Create(IDD_PLUGIN_TEST,&mach3CWnd);

	Mach3ObjectModelStartup();

	g_pluginRemote = new QtWsTransport;
	DbgMsg(("myPostInitControl exit"));
}

//----------------------------------------------------------------------------

// Called to configure the device
// Has read/write access to Mach XML profile to remember what it needs to.

void myConfig(CXMLProfile *DevProf)

{
	DbgMsg(("myConfig entry"));
	
	MessageBox(NULL, "Plugin remote", "Config OK", MB_OK);
	//dlg->ShowWindow(SW_SHOW);

	//LoadGcodeFile("C:\\CNC\\spirals.nc");


	DbgMsg(("myConfig exit"));
}

//----------------------------------------------------------------------------

// 10Hz update loop

void myUpdate()

{
	// DbgMsg(("myUpdate entry"));
	auto cmd = g_pluginRemote->GetLastCommand();
	
	switch (cmd)
	{
	case QtWsTransport::CMD_START:
		MessageBox(NULL, "CMD_START", "Config OK", MB_OK);
		break;
	case QtWsTransport::CMD_LOAD_CODE:
		LoadGcodeFile((char*)g_pluginRemote->FileName().c_str());
		break;
	case QtWsTransport::CMD_ZERO_AXIS:
		scripter.SetDRO(83, 0);
		scripter.SetDRO(84, 0);
		scripter.SetDRO(85, 0);
		break;
	}
	// DbgMsg(("myUpdate exit"));
}

//----------------------------------------------------------------------------

// called at 40Hz. This is used for Higher Res timing needs. 
// only use as required, it can use alot of system resources. 

void myHighSpeedUpdate()

{
	// DbgMsg(("myHighSpeedUpdate entry"));

	
	// DbgMsg(("myHighSpeedUpdate exit"));
}

//----------------------------------------------------------------------------

// ======================================================================================================
//
// The Helpers follow
//
//=======================================================================================================

// put your helper routines here


