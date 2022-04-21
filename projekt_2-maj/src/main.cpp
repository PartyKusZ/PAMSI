#include <vector>
#include <chrono>
#include "data.hpp"
#include "parser.hpp"
#include "write_to_mem.hpp"
int main(){
    std :: vector<t_data> movie_rating_list;
    std :: fstream file;
    file.open("../projekt2_dane.csv", std :: ios :: in);
    write_to_mem(movie_rating_list,file);
    auto start = std::chrono::high_resolution_clock::now();
    movie_rating_list.pop_back();
    auto end = std::chrono::high_resolution_clock::now();
    auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    std :: cout << time.count() << std :: endl;
    t_data *tab = new t_data[movie_rating_list.size()];
    std :: copy(movie_rating_list.begin(), movie_rating_list.end(), tab);
    
    
    
    
    
}