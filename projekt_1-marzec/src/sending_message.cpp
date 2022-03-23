#include"sending_message.hpp"

void t_sending_message :: take_message(){
    int counter = 0;
    int counter1 = 0;

    std :: string tmp;
    char c;
    while(!file.eof()){
        while(!file.eof() && counter < quan_of_char){
            file >> c;
            tmp += c;
            counter++;
        }
        
        message.set_part_of_message(tmp);
        message.set_number_of_part(counter1);
        tab.push(message,message.get_number_of_part());
        tmp.clear();
        counter1++;
    }

}


part_of_message t_sending_message :: send_message(){

    part_of_message tmp;
    tmp = tab.top();
    tab.pop();
    return tmp;
    
}