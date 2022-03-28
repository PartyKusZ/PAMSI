#pragma once 
#include <iostream>
#include <stdexcept>
#include"struct_for_message.hpp"
#include<algorithm>
#include"how_sort.hpp"




template<typename T>

class t_priority_queue{

    private:
        
        static constexpr int initial_size = 0;
        int quantity; //quantity of nodes 
        struct str_of_data {
            T T_type;
            str_of_data *next = nullptr;
            str_of_data *previous = nullptr;
            int key;
            void operator=(const str_of_data &val);
        };
        str_of_data *data;

        sort how_sort;

        bool comprasion(int  x, int y){
            if(how_sort == sort :: asc)
                return x > y;
            if(how_sort == sort ::des)
                return x < y;

        };
        
        


    public:
        t_priority_queue<T>(sort x): how_sort(x),quantity(initial_size), data(nullptr){;};
        t_priority_queue<T>() = default;
        void insert(const T &val, const int &x);
        void pop();
        void pop_all();
        bool empty(){return data == nullptr;};
        T top();
        int size(){return quantity;};
        void print();

};

