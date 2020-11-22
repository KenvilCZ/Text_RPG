#include "Core.h"
//Init Variable
void Core::Init_Variable()
{
	this->b_Exit = false;
	
} 


//Constructor
Core::Core() : b_Exit(false)
{
	m_Game = new Game;
	this->Init_Variable();

}

//Destructor
Core::~Core()
{
	delete this->m_Game;
}

//Update

void Core::Update()
{
	this->m_Game->Update();
}

void Core::Run()
{
	// CORE
	while (this->b_Exit == false)
	{
		// Update Core and wait for Exit
		this->Update();
	}
	
}
