#pragma once 
#include <iostream>
#include <stdexcept>
#include"struct_for_message.hpp"


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
            int key;
            void operator=(const str_of_data &val);
        };
        str_of_data *data;

        bool comprasion_ascending(str_of_data x, str_of_data y){return x.key > y.key;};
        str_of_data &operator[](const int &i);
        void sort(const int &left,const int &right);


    public:
        t_vector(): quantity(initial_size), data(nullptr){;};
        void push(const T &val, const int &x);
        void pushs(const T &val, const int &x);
        void pop();
        void pop_all();
        bool empty(){return data == nullptr;};
        T top();
        int size(){return quantity;};
        
        void sort();

       

        void print();

};

