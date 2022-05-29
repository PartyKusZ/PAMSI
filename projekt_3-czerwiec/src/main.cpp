#include "t_game.hpp"
#include <iostream>
int main(){
    t_game x;
    
    x.init_gameboard(10);
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
        if(x.isButtonPressed(sf :: Mouse :: Left)){
           x.set_gameboad_table(x.getPosition(window));
        }

        window.draw(x);
       // std:: cout << "X: " << x.getPosition(window).x << '\n' << "Y: " << x.getPosition(window).y << '\n'; 
        window.display();
    }
}