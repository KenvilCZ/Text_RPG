#include "Core.h"
//Init Variable
void Core::Init_Variable()
{
	this->Window = nullptr;
	this->DeltaTime = 0.f;

	

	this->b_Exit = false;
	
}
void Core::Init_Window()
{
	string Title = "SFML_C++_RPG_TEXT";

	sf::VideoMode Window_Bounds = sf::VideoMode::getDesktopMode();

	Window_Bounds.width = 800;
	Window_Bounds.height = 600;

	this->Window_Settings.antialiasingLevel = false;
	this->Window = new sf::RenderWindow(Window_Bounds, Title, sf::Style::Titlebar | sf::Style::Close, this->Window_Settings);

}



//Constructor
Core::Core() : b_Exit(false)
{
	m_Game = new Game;
	this->Init_Variable();
	this->Init_Window();
	


}

//Destructor
Core::~Core()
{
	delete this->m_Game;
	delete this->Window;
}

void Core::Update_DeltaTime()
{
	this->DeltaTime = this->Dt_Clock.restart().asSeconds();
}

void Core::Update_SFML_Events()
{
	while (this->Window->pollEvent(this->event))
	{
		if (this->event.type == sf::Event::Closed)
			this->Window->close();
	}
}

//Update

void Core::Update()
{
	//this->m_Game->Update();
	this->Update_SFML_Events();
}

void Core::Render()
{
	this->Window->clear();
	// DRAW ->
	this->Window->display();
}

void Core::Run()
{
	while (this->Window->isOpen())
	{
		this->Update_DeltaTime();
		this->Update();
		this->Render();
	}
}
