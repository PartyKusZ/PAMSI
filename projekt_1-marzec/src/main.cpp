#include<iostream>
#include"my_vector.hpp"
#include<string>
#include"struct_for_message.hpp"
#include "test.hpp"
#include "sending_message.hpp"
#include "receiving_message.hpp"
using namespace std;

int main(){

  t_sending_message send_message;
  t_receiving_message recive_message;

 
  send_message.take_message();
  send_message.print();

  while(send_message.empty() != true){
    recive_message.recive_message(send_message.send_message());
  }
  recive_message.write();
 
 

//  test_push();
// test_pushs();
// test_pop();
// test_pop_all();
// test_top();
// test_empty();
// test_size();
// test_sort();
}