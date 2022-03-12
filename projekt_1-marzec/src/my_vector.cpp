#include"my_vector.hpp"

template<typename T>

void t_vector<T> :: push(const T &val){

   
    
    if(data == nullptr){
        data = new str_of_data;
        data->T_type = val;
        data->last = data;
        quantity++;

    }else{
        data->last->next = new str_of_data;
        data->last->next->T_type = val;
        data->last->next->nr_of_node = quantity++;
        data->last = data->last->next;
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
T t_vector<T> :: top(){
    
    try{
        if(this->empty() != true){
            return data->T_type;
        }else{
            throw std :: range_error("t_vector is empty");

        }
    }
    catch(const std :: range_error& e){
        std::cerr <<" std :: range_error: "<< e.what() << '\n';
        exit(EXIT_FAILURE);
    }
    
    
}


template<typename T>

T &t_vector<T> :: operator[](const int &i){
    str_of_data *tmp;
    tmp = data;
    try{

        if(i > quantity -1 && i < 0){

            throw std :: range_error("index of t_vector out of range");

        }else{

            while(tmp->nr_of_node != i){

                tmp = tmp->next;
            }
            return tmp->T_type;

        }

    }catch(const std :: range_error& e){

        std::cerr <<" std :: range_error: "<< e.what() << '\n';
        exit(EXIT_FAILURE);

    }    
}



template<typename T>

void t_vector<T> :: operator=(const T &val){

    data->T_type = val;

}


template<typename T>

T t_vector<T> :: print(){
    str_of_data *tmp = data;
    do{
        std :: cout << tmp->T_type << " | "<<tmp->nr_of_node <<  std :: endl;
        tmp = tmp->next;
    }while(tmp != nullptr);
}


template class t_vector<int>;