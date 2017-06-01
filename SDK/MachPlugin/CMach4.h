// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

// CMach4 wrapper class

class CMach4 : public COleDispatchDriver
{
public:
	CMach4(){} // Calls COleDispatchDriver default constructor
	CMach4(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMach4(const CMach4& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IMach4 methods
public:
	void LoadGCodeFile(LPCTSTR FileName)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, FileName);
	}
	void CloseFile()
	{
		InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH GetScriptDispatch()
	{
		LPDISPATCH result;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void ShutDown()
	{
		InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// IMach4 properties
public:

};
