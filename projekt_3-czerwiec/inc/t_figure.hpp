#pragma once
#include <SFML/Graphics.hpp>
#include<SFML/Window.hpp>

class t_figure: public sf :: Font, public sf :: Text{
    protected:
         int font_size;
         double hor_offset = -0.15;
         double ver_offset = 0.10;
    public:
        t_figure() = default;
        void set_position(double x, double y){
            this->setPosition(x + (ver_offset * this->getCharacterSize()), y + (hor_offset * this->getCharacterSize() ) );
        }
};