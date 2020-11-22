#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

enum Character { Viking = 1, Human }e_Character;

class NewGame
{
private:

	string Player_Name;
	
	

public:

	NewGame();
	virtual ~NewGame();

	void Get_Player_Name();
	void Get_Select_Character();

	string Set_Player_Name() const;
	unsigned short Set_Select_Character() const;



};

