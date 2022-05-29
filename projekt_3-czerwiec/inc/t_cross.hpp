#pragma once
#include <SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include "t_figure.hpp"

class t_cross: public t_figure{
    
    public:
        //t_cross() = default;
        t_cross(): t_figure(){ 
            this->loadFromFile("arial.ttf");
            this->setFont(*this);
            this->setString("X");
            this->setLineSpacing(0);
            this->setLetterSpacing(0);
            this->setPosition(ver_offset * font_size, hor_offset * font_size);
            this->setFillColor(sf::Color::Black);
        };
};