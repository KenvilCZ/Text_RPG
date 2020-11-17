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
	switch (this->Menu_Selection)
	{
	case 1:
	{
		// New Game

		break;
	}
	case 2:
	{
		// Load

		break;
	}
	case 3:
	{
		// Options

		break;
	}
	case 4:
	{
		//Exit

		break;
	}
	default:
		break;
	}
}



void MainMenu::Update()
{
	this->Menu();
	
}