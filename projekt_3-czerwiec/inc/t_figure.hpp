#pragma once
#include <SFML/Graphics.hpp>
#include<SFML/Window.hpp>

class t_figure: public sf :: Font, public sf :: Text{
    protected:
        const int font_size;
        const double offset = -0.29;
    public:
        t_figure(int _font_size): font_size(_font_size) {}
};