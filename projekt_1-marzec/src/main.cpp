#include<iostream>
#include"my_vector.hpp"
#include<string>
#include"struct_for_message.hpp"
#include "test.hpp"
#include "sending_message.hpp"
using namespace std;

int main(){

  t_sending_message send_message;
  send_message.open("../message.txt");
  send_message.take_message();
  send_message.print();
   
}