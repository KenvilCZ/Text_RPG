#include "Core.h"

void Core::Init_Variable()
{
	this->Exit = false;
}

Core::Core()
{
}

Core::~Core()
{

}

void Core::Update()
{
	
}

void Core::Run()
{
	while (this->Exit == false)
	{
		this->Update();
	}
	
}
