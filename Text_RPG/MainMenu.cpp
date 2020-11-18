#include "MainMenu.h"


void MainMenu::Init_Variable()
{
	this->Menu_Selection = 0;

	ifstream Load_Menu_Text("Data_Text/Menu_CS.loc");
	if (Load_Menu_Text.is_open())
	{
		while (getline(Load_Menu_Text, this->Menu_Text))
		{
			cout << this->Menu_Text << endl;
		}

		Load_Menu_Text.close();
	}
}


MainMenu::MainMenu() : Menu_Selection(0)
{ 

	this->Init_Variable();
	

	
}

MainMenu::~MainMenu()
{
}


void MainMenu::Menu()
{
	cout << "\n\nVolba : ";
	cin >> this->Menu_Selection;
	switch (this->Menu_Selection)
	{
	// New Game
	case 1:
	{
		cout << "a";
		break;
	}
	// Load
	case 2:
	{
		cout << "b";
		break;
	}
	// Options
	case 3:
	{
		cout << "c";
		break;
	}
	//Exit
	case 4:
	{

		return exit(0);
	}
	default: 
		break;
	}
}


void MainMenu::Update()
{
	this->Menu();
}