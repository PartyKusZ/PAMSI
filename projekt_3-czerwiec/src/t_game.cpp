#include "t_game.hpp"
bool  t_game :: check_win() {
   
   int circles = 0;
    int crossses = 0;
    int draw = 0;

    for(int i = 0; i < number_of_fields; ++i){ // checking horizontal win
        for(int j = 0; j < number_of_fields; ++j){
            if(gameborad_table[i][j] == 'o'){
                circles++;
            }
            if(gameborad_table[i][j] == 'x'){
                crossses++;
            }

        }
        if(circles == number_of_fields){
            winner = who_start :: ai;
            return true;  
        }
        if(crossses == number_of_fields){
            winner = who_start :: human;
            return true;
        }
        circles = 0;
        crossses = 0;
    }

    for(int i = 0; i < number_of_fields; ++i){ // checking horizontal win
        for(int j = 0; j < number_of_fields; ++j){
            if(gameborad_table[j][i] == 'o'){
                circles++;
            }
            if(gameborad_table[j][i] == 'x'){
                crossses++;
            }

        }
        if(circles == number_of_fields){
            winner = who_start :: ai;
            return true;
        }
        if(crossses == number_of_fields){
            winner = who_start :: human;
            return true;
        }
        circles = 0;
        crossses = 0;
    }


    for(int i = 0; i < number_of_fields; ++i){ // checking diagonal win
        if(gameborad_table[i][i] == 'o'){
            circles++;
        }
        if(gameborad_table[i][i] == 'x'){
            crossses++;
        }

    }
    if(circles == number_of_fields){
            winner = who_start :: ai;
            return true;
        }
        if(crossses == number_of_fields){
            winner = who_start :: human;
            return true;
        }
        circles = 0;
        crossses = 0;

    for(int i = 0, j = number_of_fields - 1; i < number_of_fields; ++i, --j){
        if(gameborad_table[i][j] == 'o'){
            circles++;
        }
        if(gameborad_table[i][j] == 'x'){
            crossses++;
        }
    }

    if(circles == number_of_fields){
            winner = who_start :: ai;
            return true;
        }
        if(crossses == number_of_fields){
            winner = who_start :: human;
            return true;
        }
        circles = 0;
        crossses = 0;


    winner = who_start :: draw;
    return false;

} 

bool t_game :: is_finish(){
    for(int i = 0; i < number_of_fields; ++i){
        for(int j = 0; j < number_of_fields; ++j){
            if(gameborad_table[i][j] == '_')
                return false;
        }
    }
    return true;
}

void t_game :: evaluate_position(){
    int tmp;
    for(int i = 0; i < number_of_fields; ++i){
        tmp = 0;
        for(int j = 0; j < number_of_fields; ++j){
            if(gameborad_table[i][j] == 'o'){
                tmp++;
            }else if(gameborad_table[i][j] == '_'){
                tmp = 0;
                break;
            }
        }
        if(tmp){
            position_rating += pow(10,tmp);
        }
    }

    for(int i = 0; i < number_of_fields; ++i){
        tmp = 0;
        for(int j = 0; j < number_of_fields; ++j){
            if(gameborad_table[j][i] == 'o'){
                tmp++;
            }else if(gameborad_table[j][i] == '_'){
                tmp = 0;
                break;
            }
        }
        if(tmp){
            position_rating += pow(10,tmp);
        }
    }
    tmp = 0;
    for(int j = 0; j < number_of_fields; ++j){
        tmp = 0;
            if(gameborad_table[j][j] == 'o'){
                tmp++;
            }else if(gameborad_table[j][j] == '_'){
                tmp = 0;
                break;
            }
            if(tmp){
                position_rating += pow(10,tmp);
            }
        }
        
    tmp = 0;
    for(int i = 0, j = number_of_fields - 1; i < number_of_fields; ++i, --j){
        tmp = 0;
            if(gameborad_table[i][j] == 'o'){
                tmp++;
            }else if(gameborad_table[i][j] == '_'){
                tmp = 0;
                break;
            }
            if(tmp){
                position_rating += pow(10,tmp);
            }
        }
        
   
}

int Z = 1;
int t_game :: minimax_alpha_beta(who_start current_player,  int depth, long int a, long int b){
    std :: cout << ++Z<<'\n';
    if(winner == current_player){
        if(current_player == who_start :: ai){
        return INT32_MAX;
        }else{
            return INT32_MIN;
        }
    }
    if(this->is_finish() || depth == 0){
        if(current_player == who_start :: ai){
             this->evaluate_position();
             return position_rating;
        }else{
             this->evaluate_position();
             return -position_rating;
        }
    }
   long int best_score;
    if(current_player == who_start :: human){
        current_player = who_start :: ai;
        best_score = INT64_MIN;
    }else{
        current_player = who_start :: human;
        best_score = INT64_MAX;
    }
    int tmp;
    for(int i = 0; i < number_of_fields; ++i){
        for(int j = 0; j < number_of_fields; ++j){
            if(gameborad_table[i][j] == '_'){
                if(current_player == who_start :: ai){
                    gameborad_table[i][j] = 'o';
                    tmp = this->minimax_alpha_beta(current_player, --depth, a, b);
                    if(best_score < tmp){
                        best_score = tmp;
                    }
                    if(a < best_score){
                        a = best_score;
                    }
                    gameborad_table[i][j] = '_';
                    if(a >= b){
                        return best_score;
                    }
                }else{
                    gameborad_table[i][j] = 'x';
                    tmp = this->minimax_alpha_beta(current_player, --depth, a, b);
                    if(best_score > tmp){
                        best_score = tmp;
                    }
                    if(a > best_score){
                        a = best_score;
                    }
                    gameborad_table[i][j] = '_';
                    if(a >= b){
                        return best_score;
                    }
                }
            }
        } 
    }
    return best_score;
}

void t_game ::  best_ai_move(){
    long int best_score = INT64_MIN;
    std :: cout << best_score;
    int tmp;
    int set_i;
    int set_j;
    for(int i = 0; i < number_of_fields; ++i){
        for(int j = 0; j < number_of_fields; ++j){
            if(gameborad_table[i][j] == '_'){
                gameborad_table[i][j] = 'o';
                tmp = minimax_alpha_beta(who_start :: ai, 4, INT64_MIN, INT64_MAX);
                gameborad_table[i][j] = '_';
                if(tmp > best_score){
                    best_score = tmp;
                    set_i = i;
                    set_j = j;
                }
            }
        }
    }
    gameborad_table[set_i][set_j] = 'o';
}