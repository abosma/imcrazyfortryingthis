#ifndef _ENGINE_H
#define _ENGINE_H

//Header Files
#ifndef _WINDOWS_
	#include <Windows.h>
#endif

#ifndef _MAP_
#include <map>
#endif

//forward declaration
enum SystemType;
class System;
class Game;

//Enumeration
enum EngineState
{
	Invalid,
	Constructing,
	Initializing,
	Running,
	ShuttingDown,
	Destroying
};

class Engine
{
public:
	Engine();
	~Engine();

	int RunLoop();

	//void* operator new(size_t size);
	//void operator delete(void* pdelete);

	static EngineState GetEngineState() { 
		return m_EngineState; 
	}

private:

	int Initialize();
	int Draw();
	int Update();
	int Shutdown();

	int AddSystem(System* pSys);

	template<typename T>
	T* GetSystem(SystemType systype)
	{
		T* psys = static_cast<T*>(m_mapSystems[systype]);
		if (!psys) {
			//Logger:log("System is not valid")"
			return nullptr;
		}
		return psys;
	}

	//create game instance
	Game* CreateGame();
	
	std::map < SystemType, System*> m_mapSystems;
	static EngineState m_EngineState;
};
#endif

