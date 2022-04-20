#pragma once
#include<vector>
#include"priority_queue.hpp"
#include"struct_for_message.hpp"
#include<fstream>
#include<string>
#include<random>
#include<algorithm>
class t_sending_message{

    private:
        std :: vector<part_of_message> tab;
        std :: fstream file;
        int quan_of_char;
        part_of_message message;
        void open(std :: string name){file.open(name, std :: ios :: in);};
        void close(){file.close();};
    public:
   
    void take_message();
    part_of_message send_message();
    bool empty(){return tab.empty();};
    void print(){
        for(int i = 0; i < tab.size(); ++i){
            std :: cout << tab[i].get_part_of_message() << "|" << tab[i].get_number_of_part() << std :: endl;
        }
    };
};