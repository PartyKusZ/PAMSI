#include"my_vector.hpp"

template<typename T>

void t_vector<T> :: push(T val){

   
    
    if(data == nullptr){
        data = new str_of_data;
        data->T_type = val;
        data->last = data;
        quantity++;

    }else{
        data->last->next = new str_of_data;
        data->last->next->T_type = val;
        data->last = data->last->next;
        quantity++;

    }

}

template<typename T>

void t_vector<T> ::pop(){
    str_of_data *tmp;
    tmp = data->next;
    delete data;
    data = tmp;
}

template<typename T>

T t_vector<T> :: print(){
    str_of_data *tmp = data;
    do{
        std :: cout << tmp->T_type << std :: endl;
        tmp = tmp->next;
    }while(tmp != nullptr);
}


template class t_vector<int>;