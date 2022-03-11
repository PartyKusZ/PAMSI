#pragma once
#include<string>

 
template<typename T>

class t_vector{

    private:
        static constexpr int  first_node = 0;

        struct  str_of_data{
            int number_of_node;
            T part_of_message;
            t_vector<T> *next;
            t_vector<T> *last;
        };

        t_vector<T> :: str_of_data data;
        
        data.number_of_node = 0;

        
        int quantity_of_nodes;
        

    public:
      

        t_vector() {;};
        void push(const T data);
        void pop();
        T top() const;
        bool empty() const;
        size_t size() const;
        T& operator[](const int x);
        
};