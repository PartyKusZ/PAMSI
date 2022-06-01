#include "t_game.hpp"
#include <iostream>
int main(){
    t_game x;
    
    x.init_gameboard(3);
    //x.best_ai_move();
    sf :: RenderWindow window(sf::VideoMode(x.get_window_size(),x.get_window_size()), "test myszki");
    window.clear(sf::Color( 255, 255, 255 ) );
    window.draw(x);
    window.display();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if(x.isButtonPressed(sf :: Mouse :: Left)  ){
           window.clear(sf::Color( 255, 255, 255 ) );
           x.set_gameboad_table(x.getPosition(window));
          
           x.best_ai_move();
           window.draw(x);
           //std:: cout << "X: " << x.getPosition(window).x << '\n' << "Y: " << x.getPosition(window).y << '\n'; 
          
           window.display();
               if(x.check_win())
                break; 
            while(x.isButtonPressed(sf :: Mouse :: Left)){}
        } 
        
    }
}