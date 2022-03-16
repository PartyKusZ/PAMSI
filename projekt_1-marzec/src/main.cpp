#include<iostream>
#include"my_vector.hpp"
#include<string>
#include"struct_for_message.hpp"
#include"sorting.hpp"
using namespace std;

int main(){
    t_vector<part_of_message> tab;
    
    part_of_message one;
    
 
    for(int i = 10000; i >=  0; --i){
      one.set_number_of_part(i);
      one.set_part_of_message("Qsh" + to_string(i));
      tab.push(one);
    }    

   
   // tab.print();
   
    
    std :: cout << "---------------------" << std :: endl;
   
    // TO DO
    t_sort :: sort(tab,0,tab.size()-1,t_comprasion_more());
      tab.print();
     
   
}