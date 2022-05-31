#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <vector>
#include "t_figure.hpp"
#include "t_circle.hpp"
#include "t_cross.hpp"
#include "t_empy.hpp"




class t_gameboard: public sf ::Drawable{
    protected:
        const int WINDOW_SIZE = 800;
        const int line_width = 4;
        int number_of_fields; 
        double filed_size;
        sf :: RectangleShape line;
        std :: vector <sf :: RectangleShape> lines;
        char **gameborad_table;
        enum class who_start {human, ai, draw};
        int move_counter = 2;
        who_start player;
    public:
        
        void init_gameboard(int number);
        void set_gameboad_table( sf :: Vector2i xy);
        void clear_gameboard();
        
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;
};