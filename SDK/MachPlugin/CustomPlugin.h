// CustomPlugin.h : main header file for the CustomPlugin DLL

#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

//#include "resource.h"		            // main symbols
 
// Here are the types of the pointers to functions that can be called

typedef void (CALLBACK *NoParms) ();
typedef void (_cdecl *OneShort) ( short );
typedef double (_cdecl *DoubleShort) ( short );
typedef void (_cdecl *VoidShortDouble) ( short , double );
typedef bool (_cdecl *BoolShort) ( short );
typedef void (_cdecl *CSTRret) ( CString );
typedef void (_cdecl *VoidLPCSTR) (LPCTSTR );
typedef void (_cdecl *VoidShortBool) ( short, bool );

//FIXIT - add to proto and V01 and V02 zip archives...
typedef void (_cdecl *DoubleShortDouble) ( short , double );


/*
typedef void (CALLBACK *NoParms) ();
typedef void (_cdecl *OneShort) ( short );
typedef double (_cdecl *DoubleShort) ( short );
typedef void (_cdecl *DoubleShortDouble) ( short , double );
typedef bool (_cdecl *BoolShort) ( short );
typedef void (_cdecl *CSTRret) ( CString );
typedef void (_cdecl *VoidLPCSTR) (LPCTSTR );
*/

// FIXIT add to proto and V01 and V02 zip archives...
extern OneShort           DoButton;     // void DoButton(code)
extern DoubleShort        GetDRO;       // Double GetDRO(code)
extern DoubleShortDouble  SetDRO;       // void SetDRO(short code, double value);
extern BoolShort          GetLED;       // bool GetLED(short code);
extern CSTRret            GetProName;   // CString GetProName()
extern VoidLPCSTR         Code;         // void Code("G0X10Y10");

//----------------------------------------------------------------------------

// CCustomPluginApp
// See CustomPlugin.cpp for the implementation of this class

class CCustomPluginApp : public CWinApp
{
public:
	CCustomPluginApp();
	~CCustomPluginApp();

// Overrides

public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

//----------------------------------------------------------------------------
