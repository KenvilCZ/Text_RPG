#include "MainMenu.h"


//Init Variables

void MainMenu::Init_Variable()
{
	this->Menu_Selection = 0;
	this->Start = false;

	// Load TEXT DATA
	system("Cls");
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

//Constructor
MainMenu::MainMenu() 
{ 
	this->Init_Variable();
}
//Destructor
MainMenu::~MainMenu()
{
	cout << "Delete MainMenu.h" << endl;
}

// Function
void MainMenu::Menu()
{
	// Choice of option on start Game
	cout << "\n\nVolba : ";
	cin >> this->Menu_Selection;
	switch (this->Menu_Selection)
	{
	// New Game
	case 1:
	{
		this->Start = true;
		this->New_Game();
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

bool MainMenu::New_Game() const
{
	// Retur true for NewGame
	return this->Start;
}
 
//Update

void MainMenu::Update()
{
	this->Menu();
}