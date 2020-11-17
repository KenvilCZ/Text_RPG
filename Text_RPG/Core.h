#pragma once
class Core
{
private:

	bool Exit;
	

public:

	void Init_Variable();

	Core();
	virtual ~Core();

	void Update();
	void Run();
};

