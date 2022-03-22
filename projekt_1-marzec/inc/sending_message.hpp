#pragma once
 
#include"my_vector.hpp"
#include"struct_for_message.hpp"
#include<fstream>
#include<string>
class t_sending_message{

    private:
        t_vector<part_of_message> tab;
        std :: fstream file;
        static constexpr int quan_of_char = 10;
        part_of_message message;
    public:
    void open(std :: string name){file.open(name, std :: ios :: in);};
    void close(){file.close();};
    void take_message();
    part_of_message send_message();
    void print(){tab.print();};
};