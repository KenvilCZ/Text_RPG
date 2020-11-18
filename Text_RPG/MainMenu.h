#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>


using namespace std;

class MainMenu
{
private:
	
	unsigned short Menu_Selection;

	string Menu_Text;
	
	


public:

	void Init_Variable();


	MainMenu();

	virtual ~MainMenu();

	void Menu();


	virtual void Update();

	
	

	
};

