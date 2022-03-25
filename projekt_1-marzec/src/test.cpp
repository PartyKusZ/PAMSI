#include "test.hpp"

constexpr int QUAN_ELEM = 100000;


void test_insert(){

    std :: ofstream file("../sprawko/graph_insert_nanoseconds.tex");
    t_priority_queue<int> tab;
    
    
    for(int i =0; i < QUAN_ELEM; i = i+100){
        
      
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.insert(i,i);
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << i << "," << time.count() << ")" << std :: endl;
        

    }
   // tab.print();
   tab.pop_all();
    file.close();


}

void test_pop(){

    std :: ofstream file("../sprawko/graph_pop_nanoseconds.tex");
    t_priority_queue<int> tab;
    for(int i = QUAN_ELEM; i > 0; i = i-100){
        tab.insert(i,i);
    }

     for(int i = 0, j = QUAN_ELEM; i < QUAN_ELEM; i = i+100, j = j-100){
      
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.pop();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << j << "," << time.count() / 1000.0 << ")" << std :: endl;
        

    }
        file.close();
    tab.pop_all();

}
void test_pop_all(){

    std :: ofstream file("../sprawko/graph_pop_all_microseconds.tex");
    t_priority_queue<int> tab;
    t_priority_queue<int> tmp;

   
    
    for(int i = 0, j = QUAN_ELEM; i < QUAN_ELEM; i = i+100, j = j-100){
         for(int k = QUAN_ELEM - i; k > 0; k = k-100){
            tab.insert(k,k);
            }
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.pop_all();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << j << "," << time.count() / 1000.0 << ")" << std :: endl;
       

    }
        file.close();
    tab.pop_all();

}
void test_size(){

        std :: ofstream file("../sprawko/graph_size_nanoseconds.tex");
    t_priority_queue<int> tab;
     for(int i =0; i < QUAN_ELEM; i = i+100){
      
        tab.insert(i,i);
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.size();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << i << "," << time.count() << ")" << std :: endl;
        

    }
        file.close();
    tab.pop_all();

}

void test_empty(){

    std :: ofstream file("../sprawko/graph_empty_nanoseconds.tex");
    t_priority_queue<int> tab;
     for(int i =0; i < QUAN_ELEM; i = i+100){
      
        tab.insert(i,i);
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.empty();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << i << "," << time.count() << ")" << std :: endl;
        

    }

        file.close();
    tab.pop_all();

}


void test_top(){

    std :: ofstream file("../sprawko/graph_top_nanoseconds.tex");
    t_priority_queue<int> tab;
    for(int i =0; i < QUAN_ELEM; i=i+100){
      
        tab.insert(i,i);
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.top();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << i << "," << time.count() << ")" << std :: endl;
        

    }
        file.close();
    tab.pop_all();

}

void testy(){
    test_pop();
test_pop_all();
test_top();
test_empty();
test_insert();
test_size();
}

//    file << "(" << probe << "," << time << ")" << std :: endl;



