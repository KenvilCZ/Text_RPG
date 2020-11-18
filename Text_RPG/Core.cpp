#include "Core.h"
//Init Variable
void Core::Init_Variable()
{
	this->b_Exit = false;
	this->m_Main_Menu = new MainMenu;
} 


//Constructor
Core::Core() : b_Exit(false), b_New_Game(false), b_Menu(true)
{
	this->Init_Variable();
}

//Destructor
Core::~Core()
{

}

//Update

void Core::Update()
{
	if (this->b_Menu == true)
	{ 
		//Update select from MainMenu
		this->b_New_Game = this->m_Main_Menu->New_Game();

		//Update MainMenu
		this->m_Main_Menu->Update();
		// MainMenu

		if (this->b_New_Game == true)
		{
			// End MainMenu and clear 
			system("cls"); 
			delete this->m_Main_Menu;
			m_Main_Menu = nullptr;
			this->b_Menu = false;
		}	
	}
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
