#include "Data.h"

void Data::Init_Variable()
{
	this->Gold = 0.f;

	this->Wood = 0;
	this->Stone = 0;
	this->Eat = 0;
	this->Iron = 0;
	this->Coal = 0;
	this->Population = 0;
	this->Mens = 0;
	this->Womens = 0;
	this->Kids = 0;
	this->Army = 0;
}

Data::Data()
{
	this->Init_Variable();
}

Data::~Data()
{
}

void Data::Set_Wood(int sum, float& dt)
{
	// Set Wood
	
	this->Prod_Wood = sum / dt;
	this->Wood = +this->Prod_Wood;
}

void Data::Set_Stone(int sum, float& dt)
{
	//Set Stone
	this->Prod_Stone = this->Get_Worker() - sum / dt;
	this->Stone = +this->Prod_Stone;
}

void Data::Set_Population()
{
	this->Population = this->Mens + this->Womens + this->Kids;
}

void Data::Set_Worker(int sum, float& dt)
{
	this->Worker = this->Mens + this->Womens;
}
