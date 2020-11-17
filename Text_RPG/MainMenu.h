#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class MainMenu
{
private:
	
	int Menu_Selection;

public:
	MainMenu();
	virtual ~MainMenu();


	virtual void Update();

	
	void Menu();


	
};

