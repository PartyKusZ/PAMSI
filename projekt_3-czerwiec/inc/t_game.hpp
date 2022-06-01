#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "t_gameboard.hpp"
#include "t_circle.hpp"
#include "t_cross.hpp"
#include "t_empy.hpp"
#include <iostream>
#include <math.h>
#include <limits>

class t_game: public t_gameboard, public sf :: Mouse{
    protected:
       int human_win = 0;
       int ai_win = 0;
       who_start winner = who_start :: draw;
       int position_rating = 0;

    public:
        t_game(): t_gameboard(), sf :: Mouse(){};
        bool check_win();
        bool is_finish();
        void evaluate_position();
        int minimax_alpha_beta(who_start current_player, int depth,  long int a, long int b);
        void best_ai_move();
        int get_window_size(){
            return WINDOW_SIZE;
        }
        

};
