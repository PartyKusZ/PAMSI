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
    
    for(int i = 0; i <= 1011000; i+=10000){
        auto start = std::chrono::high_resolution_clock::now();
        tab.clear();
        for(int j = 0; j < i && !file.eof(); ++j){
            s = read_from_csv_file(file);
            
            
            if(s.rating != "rating" && s.rating != ""){
                d.move = s.move;
                d.rating = std :: stod(s.rating);
                tab.push_back(d);
            }
        
        }
        file.seekg (0, std :: ios :: beg);
        auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
        filtr << i << " " << time.count() << std :: endl;
    
    }
    filtr.close();

}

void write_to_mems(std :: vector<t_data> &tab, std :: fstream &file){

    t_datas s;
    t_data d;
    std :: fstream filtr;
   
    
    while(!file.eof()){
        
            s = read_from_csv_file(file);
            
            
            if(s.rating != "rating" && s.rating != ""){
                d.move = s.move;
                d.rating = std :: stod(s.rating);
                tab.push_back(d);
            }
        
    
    }
    filtr.close();

}

