#pragma once

// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CVideoocxtoolsctrl2 wrapper class

class CVideoocxtoolsctrl2 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CVideoocxtoolsctrl2)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x523EF5C0, 0x2E8B, 0x44C0, { 0x94, 0xF4, 0xC6, 0x98, 0x1B, 0x3D, 0xC, 0x7 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// Attributes
public:


// Operations
public:

// _DVideoOCXTools

// Functions
//

	BOOL SobelMagnitude(long sourceimagehandle, long resultimagehandle)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, sourceimagehandle, resultimagehandle);
		return result;
	}
	BOOL SobelDirection(long sourceimagehandle, long resultimagehandle, long directionimagehandle)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, sourceimagehandle, resultimagehandle, directionimagehandle);
		return result;
	}
	BOOL Motion(long sourceimagehandle, long resultimagehandle)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, sourceimagehandle, resultimagehandle);
		return result;
	}
	BOOL Difference(long source1imagehandle, long source2imagehandle, long resultimagehandle)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, source1imagehandle, source2imagehandle, resultimagehandle);
		return result;
	}
	BOOL Threshold(long sourceimagehandle, short Threshold, long resultimagehandle)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I2 VTS_I4 ;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, sourceimagehandle, Threshold, resultimagehandle);
		return result;
	}
	BOOL Normalize(long sourceimagehandle, short min, short max, long resultimagehandle)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I2 VTS_I2 VTS_I4 ;
		InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, sourceimagehandle, min, max, resultimagehandle);
		return result;
	}
	BOOL DrawText(long image, LPCTSTR text, long x, long y)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_I4 VTS_I4 ;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, image, text, x, y);
		return result;
	}
	BOOL DrawDateTime(long image, long x, long y)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, image, x, y);
		return result;
	}
	BOOL SetTextStyle(long image, LPCTSTR fontname, short fontsize, short colorred, short colorgreen, short colorblue)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_I2 VTS_I2 VTS_I2 VTS_I2 ;
		InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, image, fontname, fontsize, colorred, colorgreen, colorblue);
		return result;
	}
	BOOL DrawCrosshair(long imagehandle, long x, long y, long r, long g, long b)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0xa, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, imagehandle, x, y, r, g, b);
		return result;
	}
	BOOL DrawLine(long imagehandle, long x0, long y0, long x1, long y1, long r, long g, long b)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0xb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, imagehandle, x0, y0, x1, y1, r, g, b);
		return result;
	}
	long SumArea(long imagehandle, long x0, long y0, long x1, long y1)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0xc, DISPATCH_METHOD, VT_I4, (void*)&result, parms, imagehandle, x0, y0, x1, y1);
		return result;
	}
	long MeanArea(long imagehandle, long x0, long y0, long x1, long y1)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0xd, DISPATCH_METHOD, VT_I4, (void*)&result, parms, imagehandle, x0, y0, x1, y1);
		return result;
	}
	BOOL Scale(long image, long scaled_image)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, image, scaled_image);
		return result;
	}
	void SetTextBackground(long imagehandle, long backgroundmode, long r, long g, long b)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0xf, DISPATCH_METHOD, VT_EMPTY, NULL, parms, imagehandle, backgroundmode, r, g, b);
	}
	BOOL DrawRectangle(long imagehandle, long x0, long y0, long x1, long y1, long r, long g, long b)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x10, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, imagehandle, x0, y0, x1, y1, r, g, b);
		return result;
	}
	void Invert(long imagehandle)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x11, DISPATCH_METHOD, VT_EMPTY, NULL, parms, imagehandle);
	}
	BOOL Resize(long image, long scaled_image)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x12, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, image, scaled_image);
		return result;
	}
	BOOL Crop(long source_image, long x0, long y0, long x1, long y1, long target_image)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x13, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, source_image, x0, y0, x1, y1, target_image);
		return result;
	}
	BOOL SetRange(long image, long bottom, long top, long value)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x14, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, image, bottom, top, value);
		return result;
	}
	long CountPixel(long imagehandle, long x0, long y0, long x1, long y1, long min, long max)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x15, DISPATCH_METHOD, VT_I4, (void*)&result, parms, imagehandle, x0, y0, x1, y1, min, max);
		return result;
	}
	BOOL DrawCircle(long imagehandle, long x0, long y0, long radius, long r, long g, long b)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x16, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, imagehandle, x0, y0, radius, r, g, b);
		return result;
	}
	void SetLineWidth(long width)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x17, DISPATCH_METHOD, VT_EMPTY, NULL, parms, width);
	}
	long GetLineWidth()
	{
		long result;
		InvokeHelper(0x18, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL Rotate(long imagehandle, long centerx, long centery, long angle, long r, long g, long b)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x19, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, imagehandle, centerx, centery, angle, r, g, b);
		return result;
	}
	BOOL Flip(long imagehandle, long direction)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x1a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, imagehandle, direction);
		return result;
	}
	void AboutBox()
	{
		InvokeHelper(DISPID_ABOUTBOX, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

// Properties
//



};
