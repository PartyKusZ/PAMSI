#include"sending_message.hpp"

void t_sending_message :: take_message(){
    
    int full10;
    int rest;
    std :: string tmp;
    std :: string tmp_b;
    char c;
    this->open("../message.txt");
    while(!file.eof()){
       std :: getline(file,tmp);
       tmp_b += tmp;
    }
    full10 = tmp_b.size() / quan_of_char;
    rest = tmp_b.size() % quan_of_char;
    tmp.clear();
    for(int i = full10 - 1; i >= 0; --i){
        for(int j = 0; j < quan_of_char; ++j){
            tmp += tmp_b[(i*quan_of_char) + j];
        }
        message.set_part_of_message(tmp);
        message.set_number_of_part(i);
        tab.push(message,message.get_number_of_part());
        tmp.clear();
    }
    for(int i = 0; i < rest; ++i){
        tmp += tmp_b[(full10 * quan_of_char) + i]; 
    }
    message.set_part_of_message(tmp);
    message.set_number_of_part(full10);
    tab.push(message,message.get_number_of_part());
    this->close();

}


part_of_message t_sending_message :: send_message(){

    part_of_message tmp;
    tmp = tab.top();
    tab.pop();
    return tmp;
    
}