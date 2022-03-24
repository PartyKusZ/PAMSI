#include"priority_queue.hpp"


template<typename T>

void t_priority_queue<T> :: insert(const T &val, const int &x){

    if(data == nullptr){
        data = new str_of_data;
        data->T_type = val;
        quantity++;
        data->key = x;
    }else{
        str_of_data *tmp;
        str_of_data *tmpnew;
        str_of_data *tmpprev;
        

        tmp = data;
        while(this->comprasion_ascending(x,tmp->key) && tmp->next != nullptr){

            tmp = tmp->next;

        }

        if(this->comprasion_ascending(x,tmp->key)){
            tmp->next = new str_of_data;
            tmp->next->T_type = val;
            tmp->next->key = x;
            tmp->next->previous = tmp;
            quantity++;
        }else{
            if(tmp->previous == nullptr){
                tmpnew = new str_of_data;
                tmpnew->T_type = val;
                tmpnew->key = x;
                tmpnew->next = tmp;
                tmp->previous = tmpnew;
                data = tmp->previous;
            }else{
            tmpnew = new str_of_data;
            tmpnew->T_type = val;
            tmpnew->key = x;
            tmpnew->next = tmp;
            tmpnew->previous = tmp->previous;
            tmp->previous->next = tmpnew;
            tmp->previous = tmpnew;
            if(tmp == data)
                data = tmp->previous;
            quantity++;
            }
        }
        //tmpnew->nr_of_node = tmp->nr_of_node;
        
        
    }

}

template<typename T>

void t_priority_queue<T> :: pop(){
    str_of_data *tmp;
    try{
        if(this->empty() != true){
           
            tmp = data->next;
            delete data;
            data = tmp;
            quantity--;
            
        }else{
            throw std :: range_error("t_priority_queue is empty  -> pop()");
        }
    }catch(const std :: range_error& e){
        std::cerr <<" std :: range_error: "<< e.what() << '\n';
        exit(EXIT_FAILURE);
    }

   
}


template<typename T>

void t_priority_queue<T> :: pop_all(){
   
  
    while(this->empty() != true){
        this->pop();
    }
       
    
}


template<typename T>
T t_priority_queue<T> :: top(){
    
    try{
        if(this->empty() != true){
            return data->T_type;
        }else{
            throw std :: range_error("t_priority_queue is empty  -> top()");

        }
    }
    catch(const std :: range_error& e){
        std::cerr <<" std :: range_error: "<< e.what() << '\n';
        exit(EXIT_FAILURE);
    }
    
    
}







template<typename T>

void t_priority_queue<T> :: str_of_data ::  operator=(const str_of_data &val){

   T_type = val.T_type;
   key = val.key;
    
}











template<typename T>

void t_priority_queue<T> :: print(){
    str_of_data *tmp = data;
    do{
        if(tmp == nullptr)
            break;
        std :: cout << tmp->T_type << " | "<<tmp->key<<  std :: endl;
        tmp = tmp->next;
    }while(tmp != nullptr);
}


template class t_priority_queue<int>;
template class t_priority_queue<part_of_message>;
template class t_priority_queue<std :: string>;
