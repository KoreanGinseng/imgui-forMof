#pragma once
#include "Mof.h"

class CImguiProc : public CDefWindowProc
{
public:
	CImguiProc();
	~CImguiProc();
	virtual MofProcResult WindowProc(MofWindowHandle hWnd, MofUInt msg, MofProcParamW wpar, MofProcParamL lpar) override;
};

