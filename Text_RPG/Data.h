#pragma once
class Data
{
private:

	float Gold;

	unsigned int Wood;
	unsigned int Stone;
	unsigned int Eat;
	unsigned int Iron;
	unsigned int Coal;
	unsigned int Population;
	unsigned int Worker;
	unsigned int Mens;
	unsigned int Womens;
	unsigned int Kids;
	unsigned int Army;

	float Prod_Gold;

	unsigned int Prod_Wood;
	unsigned int Prod_Stone;
	unsigned int Prod_Eat;
	unsigned int Prod_Iron;
	unsigned int Prod_Coal;
	unsigned int Prod_Population;
	unsigned int Prod_Worker;
	unsigned int Prod_Mens;
	unsigned int Prod_Womens;
	unsigned int Prod_Kids;
	unsigned int Prod_Army;


public:

	// Init_Variables
	void Init_Variable();

	//Constructor / Destructor
	Data();
	virtual ~Data();

	// Functions

	//unsigned int Get_Wood() const;
	//unsigned int Get_Stone() const;
	//unsigned int Get_Eat() const;
	//unsigned int Get_Iron() const;
	//unsigned int Get_Coal() const;
	//unsigned int Get_Population() const;
	//unsigned int Get_Worker() const;
	//unsigned int Get_Mens() const;
	//unsigned int Get_Womens() const;
	//unsigned int Get_Kids() const;
	//unsigned int Get_Army() const;

	//void Set_Wood(int sum, float& dt);
	//void Set_Stone(int sum, float& dt);
	//void Set_Eat(int sum, float& dt);
	//void Set_Iron(int sum, float& dt);
	//void Set_Coal(int sum, float& dt);
	//void Set_Population();
	//void Set_Worker(int sum, float& dt);
	//void Set_Mens(int sum, float& dt);
	//void Set_Womens(int sum, float& dt);
	//void Set_Kids(int sum, float& dt);
	//void Set_Army(int sum, float& dt);
	//

	//
	//virtual void Update();
};

