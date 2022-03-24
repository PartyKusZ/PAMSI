#pragma once
#include"priority_queue.hpp"
#include"struct_for_message.hpp"
#include<fstream>
#include<string>


class t_receiving_message{

    private:
        t_priority_queue<part_of_message> tab;
        std :: fstream file;
        void open(std :: string name){file.open(name, std :: ios :: out);};
        void close(){file.close();};
    public:
        
        void write();
        void recive_message(part_of_message message);

};