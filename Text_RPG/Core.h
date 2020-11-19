#pragma once
#include "MainMenu.h"
class Core
{
private:

	bool Exit;
	

public:

	MainMenu* m_Main_Menu; 

	void Init_Variable();

	Core();
	virtual ~Core();

	//Fucntion

	// Update
	void Update();
	void Run();
};

