#include "t_gameboard.hpp"

#include <iostream>

void t_gameboard :: init_gameboard(int number){
    number_of_fields = number;
    filed_size = WINDOW_SIZE / number_of_fields;
    line.setSize({WINDOW_SIZE,line_width});
    line.setFillColor(sf::Color::Black);
    for(int i = 1; i < (number_of_fields ) ; ++i){
         line.setPosition(0, i * filed_size);
         lines.push_back(line);
     }
     line.setRotation(90);
     for(int i = 1; i < (number_of_fields ) ; ++i){
         line.setPosition(i * filed_size, 0);
         lines.push_back(line);
     }
     gameborad_table = new char *[number_of_fields];
     for(int i = 0; i < number_of_fields; ++i){
         gameborad_table[i] = new char [number_of_fields];
         for(int j = 0; j < number_of_fields; ++j){
             gameborad_table[i][j] = '_';
         }
     }
     
}

void t_gameboard :: set_gameboad_table( sf :: Vector2i xy){
    
        xy.x = xy.x / filed_size;
        xy.y = xy.y / filed_size;
        if(xy.x < number_of_fields && xy.y < number_of_fields)
            gameborad_table[xy.x][xy.y] = 'x';
        
    
}

void t_gameboard :: clear_gameboard(){
    lines.clear();
    line.setPosition(0,0);
    line.setRotation(0);
}

 void t_gameboard :: draw(sf::RenderTarget& target, sf::RenderStates states)const{
     t_circe circle;
     t_cross cross;
     circle.setCharacterSize(filed_size);
     cross.setCharacterSize(filed_size);
     for(int i = 0; i < lines.size(); ++i){
         target.draw(lines[i],states);
     }
     for(int i = 0; i < number_of_fields; ++i){
         for(int j = 0; j < number_of_fields; ++j){
             
            if(gameborad_table[i][j] == 'x'){
                cross.set_position(i * filed_size, j * filed_size);
                target.draw(cross,states);
            }
            if(gameborad_table[i][j] == 'o'){
                circle.setPosition(i * filed_size , j * filed_size);
                target.draw(circle,states);
            }
         }
     }
    
}