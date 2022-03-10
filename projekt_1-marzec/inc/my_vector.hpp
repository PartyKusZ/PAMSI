#pragma once
#include<string>

 
template<typename T>

class t_vector{

    private:
        static constexpr int  first_node = 0;
        int get_number_of_node(){return number_of_node;};
        void set_number_of_node(int x){number_of_node = x;};
    protected:
        int number_of_node;
        T part_of_message;
        t_vector *next;
        t_vector *last;
        int size ;

    public:
      

        t_vector(): number_of_node(first_node), next(nullptr), last(nullptr){;};
        void push(const T data);
        void pop();
        T top() const;
        bool empty() const;
        size_t size() const;
        T& operator[](const int x);
        
};