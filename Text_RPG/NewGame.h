#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "MainMenu.h"

using namespace std;

 enum Character { Viking = 1, Human };

class NewGame
{
private:

	// Variables
	string Player_Name;
	Character e_Character;
	MainMenu* m_Main_Menu = nullptr;
	
	
public:

	// Constructro /Destructor
	NewGame();
	virtual ~NewGame();

	// Function
	void Set_Player_Name();
	void Set_Select_Character();

	void Save_Player_Settings(string(Get_Name), unsigned short(Get_Character));

	string Get_Player_Name() ;
	unsigned short Get_Select_Character() const;

	virtual void Update();


};

