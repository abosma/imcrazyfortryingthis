#include "winMain.h"

//Additional include files
#ifndef _STRING_H
	#include "string.h"
#endif
#ifndef _IOSTREAM_H
	#include "iostream.h"
#endif

#if defined (DEBUG) | defined (_DEBUG)
	int _tmain(int argc, char* argv[])
	{
		UNREFERENCED_PARAMETER(argc);
		UNREFERENCED_PARAMETER(argv);

		//Logger::log("Starting program");

		//Run winmain function

		winMain((HINSTANCE)GetModuleHandle(NULL), 0, 0, SW_SHOW);
	}
#endif

int WINAPI winMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	UNREFERENCED_PARAMETER(hInstance);
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);
	UNREFERENCED_PARAMETER(nCmdShow);

#if defined (DEBUG) | defined (_DEBUG)
	HeapSetInformation(NULL, HeapEnableTerminationOnCorruption, NULL, 0);

	//enable runtime memory leak check for debug builds
	//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//_CrtSetBreakAlloc(0);
#endif

	//create the engine
	//Engine* pEngine = new Engine();

	//kick of the game
	//int result = pEngine->RunLoop();

	//delete engine
	//delete pEngine;

	//return result;

	return 0;
}