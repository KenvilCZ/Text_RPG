#pragma once
#include "NewGame.h"
class Game 
{
private:
    // Variables
    NewGame* m_NewGame = nullptr;

    bool b_New_Game_Is_Open;
    
public:
    // Constructor / Destructor
    Game();
    virtual ~Game();

    // Functions
    virtual void Update();

};

