#pragma once 
#include<iostream>
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

        friend std :: ostream & operator << (std :: ostream &strm, part_of_message &w){
        strm << w.get_part_of_message();
        return strm;};
         
};





struct t_comprasion_more{

    bool operator()(part_of_message x, part_of_message y){
        return x.get_number_of_part() > y.get_number_of_part();
    }
};

