#include "test.hpp"

constexpr int QUAN_ELEM = 1000;

void test_push(){

    std :: ofstream file("../sprawko/graph_push_nanoseconds.tex");
    t_vector<int> tab;
    int counter = 1;
    while(counter < QUAN_ELEM){
        for(int i = 0; i < counter; ++i){
            tab.push(i,i);
        }
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.push(counter,counter);
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(20);
        file << "(" << counter << "," << time.count() << ")" << std :: endl;
        counter++;
        tab.pop_all();
    }
        file.close();


}
void test_pushs(){
    std :: ofstream file("../sprawko/graph_pushs_miliseconds.tex");
    t_vector<int> tab;
    int counter = 1;
    while(counter < QUAN_ELEM){
        for(int i = 0; i < counter; ++i){
            tab.pushs(i,i);
        }
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.pushs(counter,counter);
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::microseconds>( stop - start);
        file.precision(4);
        file << "(" << counter << "," << time.count() / 1000.0 << ")" << std :: endl;
        counter++;
        tab.pop_all();
    }
        file.close();

}
void test_pop(){

    std :: ofstream file("../sprawko/graph_pop_nanoseconds.tex");
    t_vector<int> tab;
    int counter = 1;
    while(counter < QUAN_ELEM){
        for(int i = 0; i < counter; ++i){
            tab.pushs(i,i);
        }
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.pop();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << counter << "," << time.count() << ")" << std :: endl;
        counter++;
        tab.pop_all();
    }
        file.close();

}
void test_pop_all(){

    std :: ofstream file("../sprawko/graph_pop_all_microseconds.tex");
    t_vector<int> tab;
    int counter = 1;
    while(counter < QUAN_ELEM){
        for(int i = 0; i < counter; ++i){
            tab.pushs(i,i);
        }
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.pop_all();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << counter << "," << time.count() / 1000.0 << ")" << std :: endl;
        counter++;
        
    }
        file.close();

}
void test_size(){

        std :: ofstream file("../sprawko/graph_size_nanoseconds.tex");
    t_vector<int> tab;
    int counter = 1;
    while(counter < QUAN_ELEM){
        for(int i = 0; i < counter; ++i){
            tab.pushs(i,i);
        }
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.size();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << counter << "," << time.count() << ")" << std :: endl;
        counter++;
        tab.pop_all();
        
        
    }
        file.close();

}
void test_sort(){

       std :: ofstream file("../sprawko/graph_sort_minutes.tex");
    t_vector<int> tab;
    int counter = 1;
    while(counter < QUAN_ELEM){
        for(int i = 0; i < counter; ++i){
            tab.pushs(i,i);
        }
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.sort();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::microseconds>( stop - start);
        file.precision(4);
        file << "(" << counter << "," << time.count() / 1000.0 << ")" << std :: endl;
        counter++;
        tab.pop_all();

        
    }
        file.close();


}
void test_empty(){

    std :: ofstream file("../sprawko/graph_empty_nanoseconds.tex");
    t_vector<int> tab;
    int counter = 1;
    while(counter < QUAN_ELEM){
        for(int i = 0; i < counter; ++i){
            tab.pushs(i,i);
        }
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.empty();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << counter << "," << time.count() << ")" << std :: endl;
        counter++;
        tab.pop_all();

        
    }

        file.close();

}


void test_top(){

    std :: ofstream file("../sprawko/graph_top_nanoseconds.tex");
    t_vector<int> tab;
    int counter = 1;
    while(counter < QUAN_ELEM){
        for(int i = 0; i < counter; ++i){
            tab.pushs(i,i);
        }
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.top();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << counter << "," << time.count() << ")" << std :: endl;
        counter++;
        tab.pop_all();

        
    }
        file.close();

}



//    file << "(" << probe << "," << time << ")" << std :: endl;



