#include"my_vector.hpp"

template<typename T>

void t_vector<T> :: push(const T &val,const int &x){

   
    
    if(data == nullptr){
        data = new str_of_data;
        data->T_type = val;
        data->last = data;
        quantity++;
        data->key = x;

    }else{
        data->last->next = new str_of_data;
        data->last->next->T_type = val;
        data->last->next->nr_of_node = quantity++;
        data->last->next->key = x;
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

  typename t_vector<T> :: str_of_data &t_vector<T> :: operator[](const int &i){
    str_of_data *tmp;
    tmp = data;
    try{

        if(i > quantity -1 || i < 0){

            throw std :: range_error("index of t_vector out of range");

        }else{

            while(tmp->nr_of_node != i){

                tmp = tmp->next;
            }
            return *tmp;

        }

    }catch(const std :: range_error& e){

        std::cerr <<" std :: range_error: "<< e.what() << '\n';
        exit(EXIT_FAILURE);

    }    
}




template<typename T>

void t_vector<T> :: str_of_data ::  operator=(const str_of_data &val){

   T_type = val.T_type;
   key = val.key;
    
}




template<typename T>

void t_vector<T> :: sort(const int &left,const int &right){

    str_of_data tmp;

    int i = left;
    int j = right;
    int pivot = (left + right) / 2;
    do{
        while(comprasion_ascending((*this)[pivot],(*this)[i])){
            i++;
        }
        while(comprasion_ascending((*this)[j],(*this)[pivot])){
            j--;
        }
        if(i <= j){
            tmp = (*this)[i];
            (*this)[i] = (*this)[j];
            (*this)[j] = tmp;
            i++;
            j--;
        }
    }while(i <= j);
     if(left < j)
       this->sort(left,j);
    if(right > i)
        this->sort(i,right);

};



template<typename T>

void t_vector<T> :: sort(){

    str_of_data tmp;

    int i = 0;
    int j = quantity - 1;
    int pivot = quantity / 2;
    do{
        while(comprasion_ascending((*this)[pivot],(*this)[i])){
            i++;
        }
        while(comprasion_ascending((*this)[j],(*this)[pivot])){
            j--;
        }
        if(i <= j){
            tmp = (*this)[i];
            (*this)[i] = (*this)[j];
            (*this)[j] = tmp;
            
            i++;
            j--;
        }
    }while(i <= j);
     if(0 < j)
       this->sort(0,j);
    if(quantity - 1 > i)
        this->sort(i,quantity - 1);

};


template<typename T>

void t_vector<T> :: print(){
    str_of_data *tmp = data;
    do{
        std :: cout << tmp->T_type << " | "<<tmp->nr_of_node <<  std :: endl;
        tmp = tmp->next;
    }while(tmp != nullptr);
}


template class t_vector<int>;
template class t_vector<part_of_message>;
template class t_vector<std :: string>;
