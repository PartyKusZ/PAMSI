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
        player = who_start :: ai;
        xy.x = xy.x / filed_size;
        xy.y = xy.y / filed_size;
        //std :: cout << "num_of_fileds: " << number_of_fields << '\n' << "x: " << xy.x << '\n' << "y: " << xy.y << '\n';
        if((xy.x < number_of_fields )&& (xy.y < number_of_fields)){
            if(gameborad_table[xy.x][xy.y] == '_'){
                if(player == who_start :: ai){
                    if(++move_counter % 2 == 0){
                        gameborad_table[xy.x][xy.y] = 'x';
                    }else{
                        gameborad_table[xy.x][xy.y] = 'x';
                    }

                }
                if(player == who_start :: human){
                    if(++move_counter % 2 == 1){
                        gameborad_table[xy.x][xy.y] = 'x';
                    }else{
                        gameborad_table[xy.x][xy.y] = 'x';
                    }

                }
            }
        }
        
    
}

void t_gameboard :: clear_gameboard(){
    lines.clear();
    line.setPosition(0,0);
    line.setRotation(0);
    move_counter = 2;
    for(int i = 0; i < number_of_fields; ++i){
        for(int j = 0; j < number_of_fields; ++j){
            gameborad_table[i][j] = '_';
        }
    }
}

 