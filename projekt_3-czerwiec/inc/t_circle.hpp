#pragma once
#include <SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include "t_figure.hpp"

class t_circe:  public t_figure{
    
    public:
       //t_circe() = default;
        t_circe(): t_figure(){
            this->loadFromFile("arial.ttf");
            this->setFont(*this);
            this->setString("O");
            this->setLineSpacing(0);
            this->setLetterSpacing(0);
            this->setPosition(ver_offset * font_size, hor_offset * font_size);
            this->setFillColor(sf::Color::Black);
        };
};