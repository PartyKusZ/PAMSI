#include"my_vector.hpp"


template<typename T>

void t_vector<T> :: push(const T data){

    if(last == nullptr){
        part_of_message = data;
        last = this;
        
    }else{
        last->next = new *t_vector<T>;
        last->next->part_of_message = data;
        last->next->number_of_node = ++last->number_of_node;
        last = last->next;
    }
}
