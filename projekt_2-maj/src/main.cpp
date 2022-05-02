#include <vector>
#include <chrono>
#include <algorithm>
#include "data.hpp"
#include "parser.hpp"
#include "write_to_mem.hpp"
#include "sorting_algorithms.hpp"
#include "tests.hpp"
#define SIZE_10000 10000
#define SIZE_100000 100000
#define SIZE_500000 500000
#define SIZE_MAXIMUM 962903


int main(){
    std :: vector<t_data> movie_rating_list;
    std :: fstream file;
    double *tab10000;
    double *tab100000;
    double *tab500000;
    double *tabmax;

    file.open("../projekt2_dane.csv", std :: ios :: in);
    // pkt 1 zadania 
    write_to_mems(movie_rating_list,file);

   std :: cout << movie_rating_list.size() << std :: endl;
   
    

    tab10000 = new double[SIZE_10000];
    tab100000 = new double[SIZE_100000];
    tab500000 = new double[SIZE_500000];
    tabmax = new double[SIZE_MAXIMUM];

    for(int i = 0; i < SIZE_10000; ++i){
        tab10000[i] = movie_rating_list[i].rating;
    }
    for(int i = 0; i < SIZE_100000; ++i){
        tab100000[i] = movie_rating_list[i].rating;
    }
    for(int i = 0; i < SIZE_500000; ++i){
        tab500000[i] = movie_rating_list[i].rating;
    }
    for(int i = 0; i < SIZE_MAXIMUM; ++i){
        tabmax[i] = movie_rating_list[i].rating;
    }
   // test_qsort_10000(tab10000);
   // test_qsort_100000(tab100000);
   // test_qsort_500000(tab500000);
   // test_qsort_962903(tabmax);
   // test_merge_sort_10000(tab10000);
   // test_merge_sort_100000(tab100000);
   // test_merge_sort_500000(tab500000);
   //test_merge_sort_962903(tabmax);
    //test_bucket_sort_10000(tab10000);
    //test_bucket_sort_100000(tab100000);
    test_bucket_sort_500000(tab500000);
    //test_bucket_sort_962903(tabmax);
    // test_intro_sort_10000(tab10000);
    // test_intro_sort_100000(tab100000);
    // test_intro_sort_500000(tab500000);
    // test_intro_sort_962903(tabmax);


   
    
}