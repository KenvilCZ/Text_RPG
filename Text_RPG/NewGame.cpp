#include "NewGame.h"

NewGame::NewGame()
{
	this->Player_Name = "None";
	
}

NewGame::~NewGame()
{
}

void NewGame::Get_Player_Name()
{
	cout << "Zadej jmeno : ";
	cin >> this->Player_Name;
	cout << endl;

}

void NewGame::Get_Select_Character()
{
	unsigned short Select = 0;

	cout << "1. Viking \n2.Human " << endl;
	cout << "Vyber charakter : ";
	cin >> Select;

	switch (Select)
	{
	case 1:
	{
		e_Character = Viking;
		break;
	}
	case 2:
	{
		e_Character = Human;
		break;
	}
	default:
		break;
	}

}


string NewGame::Set_Player_Name() const
{
	return this->Player_Name;
}

unsigned short NewGame::Set_Select_Character() const
{
	return e_Character;
}