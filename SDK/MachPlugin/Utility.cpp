// Utility.cpp
// Utility / helper functions for Mach3 plugin authoring

#include "stdafx.h"

#include "Utility.h"
#include "dbg.h"

//----------------------------------------------------------------------------

HWND GetMach3MainWindow(VOID)

{
	HWND m3 = NULL;

	m3 = FindWindow(NULL,"Mach3 CNC Controller ");

	if (NULL != m3) {

		DbgMsg(("found Mach3 window"));
	}

	return(m3);
}

//----------------------------------------------------------------------------
