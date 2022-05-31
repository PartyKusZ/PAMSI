#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "t_gameboard.hpp"
#include "t_circle.hpp"
#include "t_cross.hpp"
#include "t_empy.hpp"

class t_game: public t_gameboard, public sf :: Mouse{
    protected:
       int human_win = 0;
       int ai_win = 0;
       who_start winner;
    public:
        t_game(): t_gameboard(), sf :: Mouse(){};
        who_start check_win();
        
        

};