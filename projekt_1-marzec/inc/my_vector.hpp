#pragma once 
#include<iostream>

template<typename T>

class t_vector{

    private:
        
        static constexpr int initial_size = 0;
        int quantity; //quantity of nodes 
        struct str_of_data {
            T T_type;
            str_of_data *next = nullptr;
            str_of_data *last = nullptr;
        };
        str_of_data *data;

    public:
        t_vector(): quantity(initial_size), data(nullptr){;};
        void push(T val);
        void pop();
        bool empty(){return data == nullptr;};
        T top(){return data->T_type;};
        int size(){return quantity;};
        T &operator[](int i);
        // add = overloading 
        T print();

};

