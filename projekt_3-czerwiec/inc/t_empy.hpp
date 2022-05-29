#pragma once 
#include "t_figure.hpp"

class t_empty: public t_figure{
    public:
        //t_empty() = default;
        t_empty(): t_figure(){
            this->loadFromFile("arial.ttf");
            this->setFont(*this);
            this->setString(" ");
            this->setLineSpacing(0);
            this->setLetterSpacing(0);
            this->setPosition(ver_offset * font_size, hor_offset * font_size);
            this->setFillColor(sf::Color::Black);
        };
};