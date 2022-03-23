#include "test.hpp"

constexpr int QUAN_ELEM = 50;

void test_push(){

    std :: ofstream file("../sprawko/graph_push_nanoseconds.tex");
    t_vector<int> tab;
    
    for(int i =0; i < QUAN_ELEM; i++){
      
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.push(i,i);
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << i << "," << time.count() << ")" << std :: endl;
        

    }

    file.close();


}
void test_pushs(){
    std :: ofstream file("../sprawko/graph_pushs_miliosecond.tex");
    t_vector<int> tab;
    std ::random_device rd;  
    std ::mt19937 gen(rd());  
    std ::uniform_int_distribution<> dist(1,QUAN_ELEM); 
  
     for(int i =0; i < QUAN_ELEM; i++){
      
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.pushs(i,dist(gen));
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::microseconds>( stop - start);
        file.precision(4);
        file << "(" << i << "," << time.count() / 1000.0 << ")" << std :: endl;
        

    }
        file.close();

}
void test_pop(){

    std :: ofstream file("../sprawko/graph_pop_nanoseconds.tex");
    t_vector<int> tab;
    for(int i = QUAN_ELEM; i > 0; --i){
        tab.push(i,i);
    }

     for(int i = 0, j = QUAN_ELEM; i < QUAN_ELEM; i++, --j){
      
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.pop();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << j << "," << time.count() / 1000.0 << ")" << std :: endl;
        

    }
        file.close();

}
void test_pop_all(){

    std :: ofstream file("../sprawko/graph_pop_all_microseconds.tex");
    t_vector<int> tab;
    t_vector<int> tmp;

   
    
    for(int i = 0, j = QUAN_ELEM; i < QUAN_ELEM; i++, --j){
         for(int k = QUAN_ELEM - i; k > 0; --k){
            tab.push(k,k);
            }
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.pop_all();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << j << "," << time.count() / 1000.0 << ")" << std :: endl;
       

    }
        file.close();

}
void test_size(){

        std :: ofstream file("../sprawko/graph_size_nanoseconds.tex");
    t_vector<int> tab;
     for(int i =0; i < QUAN_ELEM; i++){
      
        tab.push(i,i);
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.size();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << i << "," << time.count() << ")" << std :: endl;
        

    }
        file.close();

}
void test_sort(){

       std :: ofstream file("../sprawko/graph_sort_minutes.tex");
    t_vector<int> tab;
    t_vector<int> tmp;

    std ::random_device rd;  
    std ::mt19937 gen(rd());  
    std ::uniform_int_distribution<> dist(1,QUAN_ELEM); 
    for(int i = 0; i < QUAN_ELEM; ++i){
        tab.push(i,dist(gen));
    }
    tmp = tab;
    for(int i = 0; i < QUAN_ELEM; ++i){
        auto start = std :: chrono :: high_resolution_clock :: now();
        tmp.sort(0,i);
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::milliseconds>( stop - start);
        file.precision(4);
        file << "(" << i << "," << time.count() << ")" << std :: endl;
        tmp = tab;
    }

        file.close();


}
void test_empty(){

    std :: ofstream file("../sprawko/graph_empty_nanoseconds.tex");
    t_vector<int> tab;
     for(int i =0; i < QUAN_ELEM; i++){
      
        tab.push(i,i);
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.empty();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << i << "," << time.count() << ")" << std :: endl;
        

    }

        file.close();

}


void test_top(){

    std :: ofstream file("../sprawko/graph_top_nanoseconds.tex");
    t_vector<int> tab;
    for(int i =0; i < QUAN_ELEM; i++){
      
        tab.push(i,i);
        auto start = std :: chrono :: high_resolution_clock :: now();
        tab.top();
        auto stop = std :: chrono :: high_resolution_clock :: now();
        auto time  = std::chrono::duration_cast<std::chrono::nanoseconds>( stop - start);
        file.precision(4);
        file << "(" << i << "," << time.count() << ")" << std :: endl;
        

    }
        file.close();

}



//    file << "(" << probe << "," << time << ")" << std :: endl;



