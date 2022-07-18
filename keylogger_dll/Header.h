#pragma once

#ifdef DLLMAIN_EXPORTS
#define DLLMAIN_API __declspec(dllexport)
#else
#define DLLMAIN_API __declspec(dllimport)
#endif

extern "C" DLLMAIN_API void printChar(char c);

extern "C" __declspec(dllexport) void CALLBACK keylog(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmdLine, int nCmdShow);
