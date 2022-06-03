#include "t_game.hpp"
#include <iostream>
int main(){
    t_game x;
    std :: cout << "Witam w grze kółko i krzyżyk. Zaleca się rozmiar planszy od 3 do 10, poziomy trudności:\n 1. dla plansz od 3 i 4 do poziom 5\n 2. dla plansz od 5 do 8 poziom 3\n 3. dla plansz 9 i 10 poziom 2.\n ";
    int board_size;
    int difficulty;
    std :: cout << "Rozmiar planszy: \n";
    std :: cin >> board_size;
    std :: cout << "Poziom trudności: \n";
    std :: cin >> difficulty;
    sf :: RenderWindow window(sf::VideoMode(x.get_window_size(),x.get_window_size()), "test myszki");
    sf::Event event;
    
    while(1){
        window.clear(sf::Color( 255, 255, 255 ) );
    

    
        x.init_gameboard(board_size);

        x.best_ai_move(difficulty);


        window.draw(x);
        window.display();
        //while(!x.isButtonPressed(sf :: Mouse :: Left)){}
        while(x.isButtonPressed(sf :: Mouse :: Left)){}
        while(!x.isButtonPressed(sf :: Mouse :: Left)){}



        while (window.isOpen())
        {
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
                    
            }
            if(x.isButtonPressed(sf :: Mouse :: Left)  ){
               window.clear(sf::Color( 255, 255, 255 ) );
               x.set_gameboad_table(x.getPosition(window));
               window.draw(x);
               window.display();

               x.best_ai_move(difficulty);
               window.draw(x);
               //std:: cout << "X: " << x.getPosition(window).x << '\n' << "Y: " << x.getPosition(window).y << '\n'; 

               window.display();
                   if(x.check_win() || x.is_finish())
                    break; 
                while(x.isButtonPressed(sf :: Mouse :: Left)){}
            } 

        }
        while(x.isButtonPressed(sf :: Mouse :: Left)){}
        while(!x.isButtonPressed(sf :: Mouse :: Left)){}

        x.clear_gameboard();
        
            
                if (event.type == sf::Event::Closed){
                    //window.close();
                    break;
                }
    }
}