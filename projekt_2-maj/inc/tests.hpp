#pragma once 
#include <fstream>
#include <chrono>
#include <algorithm>
#include <random>
#include <iostream>
#include "sorting_algorithms.hpp"
#define SIZE_10000 10000
#define SIZE_100000 100000
#define SIZE_500000 500000
#define SIZE_MAXIMUM 962903

void test_qsort_10000(double *tab);
void test_qsort_100000(double *tab);
void test_qsort_500000(double *tab);
void test_qsort_962903(double *tab);
void test_merge_sort_10000(double *tab);
void test_merge_sort_100000(double *tab);
void test_merge_sort_500000(double *tab);
void test_merge_sort_962903(double *tab);
void test_bucket_sort_10000(double *tab);
void test_bucket_sort_100000(double *tab);
void test_bucket_sort_500000(double *tab);
void test_bucket_sort_962903(double *tab);
void test_intro_sort_10000(double *arr  );
void test_intro_sort_100000(double *arr );
void test_intro_sort_500000(double *arr );
void test_intro_sort_962903(double *arr);











