#include "NewGame.h"


// Constructor / Destructor
NewGame::NewGame()
{
	this->m_Main_Menu = new MainMenu;
	this->Player_Name = "None";
	
}

NewGame::~NewGame()
{
	delete this->m_Main_Menu;
	this->m_Main_Menu = nullptr;
	cout << " Delete NewGame.h" << endl;
}

// Function
void NewGame::Set_Player_Name()
{
	/* Set Player name if start New_Game and Player*/
	/* MAYBYE is not death or does not exist*/
	system("cls");
	cout << "Zadej jmeno : ";
	cin >> this->Player_Name;
	cout << endl;

}

void NewGame::Set_Select_Character()
{
	/* Set choice Character if start New_Game and Player is not death or does not exist*/
	unsigned short Select = 0;
	system("cls");
	cout << "1. Viking \n2. Human " << endl;
	cout << "Vyber charakter : ";
	cin >> Select;

	switch (Select)
	{
	case 1:
	{
		Character::Viking;
		break;
	}
	case 2:
	{
		Character::Human;
		break;
	}
	default:
		break;
	}
}

void NewGame::Save_Player_Settings(string(Get_Name), unsigned short(Get_Character))
{
	// Save New_Player : Player_Name, Character
	ofstream Save_Player;
	Save_Player.open("Player_Data.dat");
	Save_Player << Get_Name;
	Save_Player << Get_Character;
	Save_Player.close();
}


string NewGame::Get_Player_Name() 
{
	return this->Player_Name;
}

unsigned short NewGame::Get_Select_Character() const
{
	return e_Character;
}

void NewGame::Update()
{

	if (this->m_Main_Menu->New_Game() == false)
	{
		// If Main_Menu not pressed New_Game;
		this->m_Main_Menu->Update();
	}
	if(this->m_Main_Menu->New_Game() == true)
	{
		this->Set_Player_Name();
		this->Set_Select_Character();
	}
	
	

}
