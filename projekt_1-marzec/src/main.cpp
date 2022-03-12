#include<iostream>
#include"my_vector.hpp"
using namespace std;

int main(){
    t_vector<int> tab;
    for(int i = 0; i < 15; ++i){
        tab.push(i);
    }
    tab.print();
    for(int i = 0; i < 7; ++i){
        tab.pop();
    }
    tab.print();

    // TO DO
    // skończyć t_vector
    // push i pop gotowe 

}