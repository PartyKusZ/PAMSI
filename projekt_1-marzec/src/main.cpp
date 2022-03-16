#include<iostream>
#include"my_vector.hpp"
#include<string>
#include"struct_for_message.hpp"
#include"sorting.hpp"
using namespace std;

int main(){
    t_vector<part_of_message> tab;
    
    part_of_message one;
    part_of_message two;
    part_of_message tree;
    part_of_message four;
    
    one.set_number_of_part(1);
    one.set_part_of_message("1");

    two.set_number_of_part(2);
    two.set_part_of_message("2");

   tree.set_number_of_part(3);
   tree.set_part_of_message("3");
    four.set_number_of_part(4);
    four.set_part_of_message("4");

    tab.push(four);
    tab.push(tree);
    tab.push(two);
    tab.push(one);
    

    
    

   
    tab.print();
   
    
    std :: cout << "---------------------" << std :: endl;
   
    // TO DO
    t_sort :: sort(tab,0,tab.size()-1,t_comprasion_more());
      tab.print();
     
    
}