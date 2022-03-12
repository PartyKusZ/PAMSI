#pragma once 

#include <string>
class part_of_message{

    private:

        int number_of_part;
        std :: string message;

    public:

        void set_number_of_part(int num){number_of_part = num;};
        int get_number_of_part(){return number_of_part;};
        void set_part_of_message(std :: string text){message = text;};
        std :: string get_part_of_message(){return message;}; 
};
