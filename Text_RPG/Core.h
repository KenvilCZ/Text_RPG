#pragma once
#include "Game.h"



class Core
{
private:
	// Variable
	bool b_Exit;

	Game* m_Game = nullptr;
public:
	 // Init Variables
	

	void Init_Variable();

	//Constructor / Destructor
	Core();
	virtual ~Core();

	void Update();
	void Run();
};

