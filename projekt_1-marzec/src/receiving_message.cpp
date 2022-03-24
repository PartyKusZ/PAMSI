#include"receiving_message.hpp"

void t_receiving_message :: recive_message(part_of_message message){
    tab.insert(message,message.get_number_of_part());
}
void t_receiving_message :: write(){
    tab.print();
    this->open("../rec_message.txt");
    while(tab.empty() != true){
        file << tab.top().get_part_of_message();
        tab.pop();
    }
    this->close();
}