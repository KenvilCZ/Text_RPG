#include "Game.h"

// Constructor / Destructor
Game::Game() : b_New_Game_Is_Open(true)
{
	m_NewGame = new NewGame;
}

Game::~Game()
{

}

// Functions

void Game::Update()
{
	if (this->b_New_Game_Is_Open == true)
	{
		this->m_NewGame->Update();

		this->m_NewGame->Save_Player_Settings(this->m_NewGame->Get_Player_Name(), this->m_NewGame->Get_Select_Character());

		delete this->m_NewGame;

		this->m_NewGame = nullptr;

		this->b_New_Game_Is_Open = false;
	}
	else
	{
		cout << " Else" << endl;
	}
	
}
