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

 void t_gameboard :: draw(sf::RenderTarget& target, sf::RenderStates states)const{
     t_circe circle;
     t_cross cross;
     int circle_win = 0;
     int cross_win = 0;
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
                circle.set_position(i * filed_size , j * filed_size);
                target.draw(circle,states);
            }
         }
     }
     int circles;
     int crosses;
     circle.setColor(sf :: Color :: Green);
     cross.setColor(sf :: Color :: Green);
     for(int i = 0; i < number_of_fields; ++i){
         for(int j = 0; j < number_of_fields; ++j){
             if(gameborad_table[i][j] == 'o'){
                circles++;
            }
            if(gameborad_table[i][j] == 'x'){
                crosses++;
            }
         }
         if(circles == number_of_fields){
             for(int j = 0; j < number_of_fields; ++j){
                circle.set_position(i * filed_size , j * filed_size);
                target.draw(circle,states);
             }
             return;
        }
        if(crosses == number_of_fields){
            for(int j = 0; j < number_of_fields; ++j){
                cross.set_position(i * filed_size , j * filed_size);
                target.draw(cross,states);
             }
             return;

        }
        circles = 0;
        crosses = 0;
     }  

     for(int i = 0; i < number_of_fields; ++i){
         for(int j = 0; j < number_of_fields; ++j){
             if(gameborad_table[j][i] == 'o'){
                circles++;
            }
            if(gameborad_table[j][i] == 'x'){
                crosses++;
            }
         }
         if(circles == number_of_fields){
             for(int j = 0; j < number_of_fields; ++j){
                circle.set_position(j * filed_size , i * filed_size);
                target.draw(circle,states);
             }
             return;

        }
        if(crosses == number_of_fields){
            for(int j = 0; j < number_of_fields; ++j){
                cross.set_position(j * filed_size , i * filed_size);
                target.draw(cross,states);
             }
             return;

        }
        circles = 0;
        crosses = 0;
     }  


     for(int j = 0; j < number_of_fields; ++j){
             if(gameborad_table[j][j] == 'o'){
                circles++;
            }
            if(gameborad_table[j][j] == 'x'){
                crosses++;
            }
         }
         if(circles == number_of_fields){
             for(int j = 0; j < number_of_fields; ++j){
                circle.set_position(j * filed_size , j * filed_size);
                target.draw(circle,states);
             }
             return;

        }
        if(crosses == number_of_fields){
            for(int j = 0; j < number_of_fields; ++j){
                cross.set_position(j * filed_size , j * filed_size);
                target.draw(cross,states);
             }
             return;

        }
        circles = 0;
        crosses = 0;

        for(int i = 0, j = number_of_fields - 1; i < number_of_fields; ++i, --j){
             if(gameborad_table[i][j] == 'o'){
                circles++;
            }
            if(gameborad_table[i][j] == 'x'){
                crosses++;
            }
         }
         if(circles == number_of_fields){
             for(int i = 0, j = number_of_fields - 1; i < number_of_fields; ++i, --j){
                circle.set_position(i * filed_size , j * filed_size);
                target.draw(circle,states);
             }
             return;

        }
        if(crosses == number_of_fields){
            for(int i = 0, j = number_of_fields - 1; i < number_of_fields; ++i, --j){
                cross.set_position(i * filed_size , j * filed_size);
                target.draw(cross,states);
             }
             return;

        }
        circles = 0;
        crosses = 0;






     
      
}