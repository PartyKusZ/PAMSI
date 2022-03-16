#pragma once 
#include <iostream>
#include <stdexcept>
#include "struct_for_message.hpp"

template<typename T>

class t_vector{

    private:
        
        static constexpr int initial_size = 0;
        int quantity; //quantity of nodes 
        struct str_of_data {
            T T_type;
            str_of_data *next = nullptr;
            str_of_data *last = nullptr;
            int nr_of_node = 0;
        };
        str_of_data *data;

    public:
        t_vector(): quantity(initial_size), data(nullptr){;};
        void push(const T &val);
        void pop();
        bool empty(){return data == nullptr;};
        T top();
        int size(){return quantity;};
        T &operator[](const int &i);
        void operator=(const T &val);
        str_of_data *begin(){return data;};
        str_of_data *end(){return data->last;};

        void print();

};

