#include "ImguiProc.h"
#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"

// Forward declare message handler from imgui_impl_win32.cpp
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

CImguiProc::CImguiProc()
{
}

CImguiProc::~CImguiProc()
{
}

MofProcResult CImguiProc::WindowProc(MofWindowHandle hWnd, MofUInt msg, MofProcParamW wpar, MofProcParamL lpar)
{

	if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wpar, lpar))
		return true;
	return CDefWindowProc::WindowProc(hWnd, msg, wpar, lpar);
}
