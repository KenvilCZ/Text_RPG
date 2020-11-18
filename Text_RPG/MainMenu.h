#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <conio.h>
#include <Windows.h>


using namespace std;

class MainMenu
{
private:
	// Variable
	unsigned int Menu_Selection;
	string Menu_Text;

public:

	// Init Variables
	void Init_Variable();

	//Constructor /Destructor
	MainMenu();
	virtual ~MainMenu();

	//Function
	void Menu();

	bool New_Game() const;

	virtual void Update();

	
	

	
};

