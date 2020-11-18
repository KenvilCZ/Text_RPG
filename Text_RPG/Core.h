#pragma once
#include "MainMenu.h"
#include "NewGame.h"


class Core
{
private:
	// Variable
	bool b_Exit;
	bool b_New_Game;
	bool b_Menu;

public:
	 // Init Variables
	MainMenu* m_Main_Menu = nullptr;
	NewGame* m_New_Game = nullptr;

	void Init_Variable();

	//Constructor / Destructor
	Core();
	virtual ~Core();

	//Fucntion

	// Update
	void Update();
	void Run();
};

