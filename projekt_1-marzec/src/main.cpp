#include<iostream>
#include"my_vector.hpp"
#include<string>
#include"struct_for_message.hpp"

using namespace std;

int main(){
    t_vector<part_of_message> tab;
    
    part_of_message one;
    
 
    for(int i = 100000; i >= 0; --i){
      one.set_number_of_part(i);
      one.set_part_of_message("Qsh" + to_string(i));
      tab.push(one,one.get_number_of_part());
    }    

   
    tab.print();
   
    
    std :: cout << "---------------------" << std :: endl;
   
    // TO DO
    tab.sort();
    tab.print();
     
   
}