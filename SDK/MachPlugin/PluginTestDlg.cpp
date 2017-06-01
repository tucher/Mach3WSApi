// PluginTestDlg.cpp : implementation file
//

#include "stdafx.h"
#include "resource.h"
#include "CustomPlugin.h"
#include "PluginTestDlg.h"
#include "Mach3Button.h"
#include "CMyScriptObject.h"
#include "dbg.h"
#include ".\plugintestdlg.h"

extern CMyScriptObject scripter;

// CPluginTestDlg dialog

IMPLEMENT_DYNAMIC(CPluginTestDlg, CDialog)
CPluginTestDlg::CPluginTestDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CPluginTestDlg::IDD, pParent)
{
}

CPluginTestDlg::~CPluginTestDlg()
{
}

void CPluginTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CPluginTestDlg, CDialog)
	ON_BN_CLICKED(IDOK, OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, OnBnClickedCancel)
	ON_BN_CLICKED(IDC_RESET, OnBnClickedReset)
	ON_BN_CLICKED(IDC_LOAD_RR, OnBnClickedLoadRr)
	ON_BN_CLICKED(IDC_RUN_RR, OnBnClickedRunRr)
END_MESSAGE_MAP()

// CPluginTestDlg message handlers

void CPluginTestDlg::OnBnClickedOk()
{
	DbgMsg(("OnBnClickedOk entry"));

	ShowWindow(SW_HIDE);

	DbgMsg(("OnBnClickedOk exit"));
}

void CPluginTestDlg::OnBnClickedCancel()
{
	DbgMsg(("OnBnClickedCancel entry"));

	ShowWindow(SW_HIDE);

	DbgMsg(("OnBnClickedCancel exit"));
}


void CPluginTestDlg::OnBnClickedReset()
{
	DoButton(MACH3_RESET);	// Reset (1021)
}

void CPluginTestDlg::OnBnClickedLoadRr()
{
	scripter.LoadFile("C:\\Mach3\\Gcode\\RoadRunner.tap");
}

void CPluginTestDlg::OnBnClickedRunRr()
{
	DoButton(CYCLE_START);	
}
