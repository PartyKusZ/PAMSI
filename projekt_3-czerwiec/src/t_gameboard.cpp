#include "t_gameboard.hpp"

void t_gameboard :: init_gameboard(int number){
    number_of_fields = number * number;
    filed_size = WINDOW_SIZE / number_of_fields;
    line.setSize({WINDOW_SIZE,10});
    line.setFillColor(sf::Color::Black);
    for(int i = 1; i < (number_of_fields / number_of_fields) ; ++i){
         line.setPosition(0, i * filed_size);
         lines.push_back(line);
     }
     //line.setRotation(90);
     for(int i = 1; i < (number_of_fields / number_of_fields) ; ++i){
         line.setPosition(i * filed_size, 0);
         lines.push_back(line);
     }
}

 void t_gameboard :: draw(sf::RenderTarget& target, sf::RenderStates states)const{
     
    //  for(int i = 0; i < lines.size(); ++i){
    //      target.draw(lines[i],states);
    //  }
    
     target.draw(line,states);
}