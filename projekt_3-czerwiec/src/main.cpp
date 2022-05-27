#include "t_gameboard.hpp"

int main(){
    t_gameboard x;
    x.init_gameboard(5);
    sf :: RenderWindow window(sf::VideoMode(800,800), "test myszki");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color( 255, 255, 255 ) );
        window.draw(x);
        window.display();
    }
}