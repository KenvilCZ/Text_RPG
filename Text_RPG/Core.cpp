#include "Core.h"

void Core::Init_Variable()
{
	this->Exit = false;
	this->m_Main_Menu = new MainMenu;
} 

Core::Core() : Exit(false)
{
	this->Init_Variable();
}

Core::~Core()
{

}

void Core::Update()
{
	this->m_Main_Menu->Update();
}

void Core::Run()
{
	while (this->Exit == false)
	{
		this->Update();
	}
	
}
