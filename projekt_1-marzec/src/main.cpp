#include<iostream>
#include"my_vector.hpp"
using namespace std;

int main(){
    t_vector<int> tab;
   
    

    for(int i = 0; i < 15; ++i){
        tab.push(i);
    }
    tab.print();
   
    for(int i = 15, j = 0; j < 15; --i,++j){
        tab[j] = i; 
    }
    std :: cout << "---------------------" << std :: endl;
    tab.print();
    // TO DO
    // skończyć t_vector
    // push i pop gotowe 

}