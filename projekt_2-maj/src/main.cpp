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
    write_to_mem(movie_rating_list,file);

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
    test_qsort_10000(tab10000);
    test_qsort_100000(tab100000);
    test_qsort_500000(tab500000);
    test_qsort_962903(tabmax);
    test_merge_sort_10000(tab10000);
    test_merge_sort_100000(tab100000);
    test_merge_sort_500000(tab500000);
    test_merge_sort_962903(tabmax);
    test_intro_sort_10000(tab10000);
    test_intro_sort_100000(tab100000);
    test_intro_sort_500000(tab500000);
    test_intro_sort_962903(tabmax);

    test_std_sort_962903(tabmax);
     double art10000;
     double art100000;
     double art500000;
     double artmax;
   merge_sort(tab10000,0,  SIZE_10000);
   std :: cout << "Done" << '\n';
   merge_sort(tab100000,0,  SIZE_100000);
   std :: cout << "Done" << '\n';
    merge_sort(tab500000,0, SIZE_500000);
   std :: cout << "Done" << '\n';
    merge_sort(tabmax, 0, SIZE_MAXIMUM);
   std :: cout << "Done" << '\n';



    art10000 = (std :: accumulate(tab10000,tab10000 + SIZE_10000,0) /static_cast<double>(SIZE_10000));
    art100000 = std :: accumulate(tab100000,tab100000 + SIZE_100000,0) / static_cast<double>(SIZE_100000);
    art500000 = std :: accumulate(tab500000,tab500000 + SIZE_500000,0) / static_cast<double>(SIZE_500000);
    artmax = std :: accumulate(tabmax,tabmax + SIZE_MAXIMUM,0) / static_cast<double>(SIZE_MAXIMUM);

    

    std :: cout << art10000 << '\n';
    std :: cout << art100000 << '\n';
    std :: cout << art500000 << '\n';
    std :: cout << artmax << '\n';
    std :: cout <<  '\n';

    std :: cout << tab10000[SIZE_10000 / 2] << '\n';
    std :: cout << tab100000[SIZE_100000 / 2] << '\n';
    std :: cout << tab500000[SIZE_500000 / 2] << '\n';
    std :: cout << (tabmax[SIZE_MAXIMUM / 2] + tabmax[(SIZE_MAXIMUM / 2) + 1] ) / 2.0  << '\n';









   
    
}