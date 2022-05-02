#pragma once
#include <algorithm>
#include <vector>
#include <cmath>
#include <iostream>
void quick_sort(double *tab, int left, int right);
void merge(double array [], int const left , int const mid, int const right );
void merge_sort(double *arr, int left , int right );
void bucket_sort(double *tab, int n);
void heapify(double arr[], int n, int i);
void heap_sort(double arr[], int n);
void insertion_sort (double *Array, int N);
int partition (double *data, int left , int right );
void intro_sort(double *arr , int size );