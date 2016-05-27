#ifndef _WINMAIN_H
#define _WINMAIN_H

//C Runtime Header Files
#ifndef _WINDOW_
	#include <Windows.h>
#endif
int _tmain(int argc, char* argv[]);
int CALLBACK winMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);
#endif