#pragma once

// CPluginTestDlg dialog

class CPluginTestDlg : public CDialog
{
	DECLARE_DYNAMIC(CPluginTestDlg)

public:
	CPluginTestDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CPluginTestDlg();

// Dialog Data
	enum { IDD = IDD_PLUGIN_TEST };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedReset();
	afx_msg void OnBnClickedLoadRr();
	afx_msg void OnBnClickedRunRr();
};
