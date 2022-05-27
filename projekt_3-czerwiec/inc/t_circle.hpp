#pragma once
#include <SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include "t_figure.hpp"

class t_circe:  public t_figure{
    
    public:
        t_circe(int _font_size): t_figure(_font_size){
            this->loadFromFile("arial.ttf");
            this->setFont(*this);
            this->setString("O");
            this->setLineSpacing(0);
            this->setLetterSpacing(0);
            this->setCharacterSize(font_size);
            this->setPosition(0, offset * font_size);
            this->setFillColor(sf::Color::Black);
        };
};