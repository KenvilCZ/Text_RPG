#pragma once
#include "Game.h"
#include "SFML/Graphics.hpp"

class Core
{
private:
	// Variable

	sf::RenderWindow *Window;
	sf::Event event;
	sf::Clock Dt_Clock;
	sf::ContextSettings Window_Settings;
	
	vector<sf::VideoMode> VideoModes;

	float DeltaTime;

	bool b_Exit;

	Game* m_Game = nullptr;
public:
	 // Init Variables
	

	void Init_Variable();
	void Init_Window();

	//Constructor / Destructor
	Core();
	virtual ~Core();

	void Update_DeltaTime();
	void Update_SFML_Events();
	void Update();
	void Render();
	void Run();
};

