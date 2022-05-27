#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <vector>



class t_gameboard: public sf ::Drawable{
    protected:
        const int WINDOW_SIZE = 800;
        const int line_width = 4;
        int number_of_fields; 
        double filed_size;
        sf :: RectangleShape line;
        std :: vector <sf :: RectangleShape> lines;
    public:
        void init_gameboard(int number);
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;
};