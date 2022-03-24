#pragma once 
#include <iostream>
#include <stdexcept>
#include"struct_for_message.hpp"


template<typename T>

class t_priority_queue{

    private:
        
        static constexpr int initial_size = 0;
        int quantity; //quantity of nodes 
        struct str_of_data {
            T T_type;
            str_of_data *next = nullptr;
            str_of_data *last = nullptr;
            str_of_data *previous = nullptr;
            
            int key;
            void operator=(const str_of_data &val);
        };
        str_of_data *data;

        bool comprasion_ascending(str_of_data x, str_of_data y){return x.key > y.key;};
        bool comprasion_ascending(int  x, int y){return x > y;};
        
        


    public:
        t_priority_queue(): quantity(initial_size), data(nullptr){;};
        void insert(const T &val, const int &x);
        void pop();
        void pop_all();
        bool empty(){return data == nullptr;};
        T top();
        int size(){return quantity;};
        void print();

};

