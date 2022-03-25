#include<iostream>
#include"priority_queue.hpp"
#include<string>
#include"struct_for_message.hpp"
#include "test.hpp"
#include "sending_message.hpp"
#include "receiving_message.hpp"
using namespace std;

int main(){
  t_priority_queue<int> tab;

  t_sending_message send_message;
  t_receiving_message recive_message;

 
  send_message.take_message();
  send_message.print();

  while(send_message.empty() != true){
    recive_message.recive_message(send_message.send_message());
  }

  std :: cout << "--------------------------" << std :: endl;
  recive_message.write();
 
testy();

}