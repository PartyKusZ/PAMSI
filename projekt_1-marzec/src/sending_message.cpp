#include"sending_message.hpp"

void t_sending_message :: take_message(){
    std :: cout << "Z ilu znaków ma się składać pakiet?"<< std :: endl;
    std ::  cin >> quan_of_char;
    int full10;
    int rest;
    std :: string tmp;
    std :: string tmp_b;
    char c;
    this->open("../message.txt");
    while(!file.eof()){
       std :: getline(file,tmp);
       tmp_b += tmp;
    }
    full10 = tmp_b.size() / quan_of_char;
    rest = tmp_b.size() % quan_of_char;
    tmp.clear();
    for(int i = full10 - 1; i >= 0; --i){
        for(int j = 0; j < quan_of_char; ++j){
            tmp += tmp_b[(i*quan_of_char) + j];
        }
        message.set_part_of_message(tmp);
        message.set_number_of_part(i);
        tab.push_back(message);
        tmp.clear();
    }
    for(int i = 0; i < rest; ++i){
        tmp += tmp_b[(full10 * quan_of_char) + i]; 
    }
    message.set_part_of_message(tmp);
    message.set_number_of_part(full10);
    tab.push_back(message);
    this->close();

    std::random_device rd;
    std::mt19937 g(rd());
    
    std::shuffle(tab.begin(), tab.end(), g);
}


part_of_message t_sending_message :: send_message(){
    part_of_message tmp;
    tmp = tab.front();
    tab.erase(tab.begin());
    return tmp;
    
}