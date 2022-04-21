#include <chrono>
#include "write_to_mem.hpp"
#include "data.hpp"
#include "parser.hpp"
void write_to_mem(std :: vector<t_data> &tab, std :: fstream &file){
    t_datas s;
    t_data d;
    std :: fstream filtr;
    filtr.open("../sprawko/dane/filtrowanie.txt", std :: ios :: out);
        auto start = std::chrono::high_resolution_clock::now();
        auto stop = std::chrono::high_resolution_clock::now();
    
    while(!file.eof()){
        s = read_from_csv_file(file);
       
        auto start = std::chrono::high_resolution_clock::now();
        
        if(s.rating != "rating" && s.rating != ""){
            d.move = s.move;
            d.rating = std :: stod(s.rating);
            tab.push_back(d);
        }
        auto stop = std::chrono::high_resolution_clock::now();


    
    }
    auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);

}