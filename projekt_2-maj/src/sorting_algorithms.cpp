#include"sorting_algorithms.hpp"

void quick_sort(double *tab, int left, int right){
	if(right <= left) return;
	
	int i = left - 1;
    int j = right + 1; 
    int pivot = tab[(left+right)/2]; 
	
	while(1){
		
		while(pivot>tab[++i]);
		while(pivot<tab[--j]);
		
		
		if( i <= j)
			std :: swap(tab[i],tab[j]);
		else
			break;
	}

	if(j > left)
	    quick_sort(tab, left, j);
	if(i < right)
	    quick_sort(tab, i, right);
}





void merge(double array [], int const left , int const mid, int const right ){
    int const sub_array_one = mid - left + 1;
    int const sub_array_two = right - mid;
    double *left_array = new double[sub_array_one];
    double *right_array = new double[sub_array_two];
    for ( int i = 0; i < sub_array_one; i++)
        left_array [ i ] = array[ left + i ];
    for ( int j = 0; j < sub_array_two; j++)
         right_array[ j ] = array[mid + 1 + j];
    int index_of_sub_array_one = 0;
    int index_of_sub_array_two = 0;
    int index_of_merged_array = left;
    while (index_of_sub_array_one < sub_array_one && index_of_sub_array_two < sub_array_two) {
        if (left_array [index_of_sub_array_one] <= right_array[index_of_sub_array_two]) {
            array[index_of_merged_array] = left_array[index_of_sub_array_one];
            index_of_sub_array_one++;
        }
        else {
            array[index_of_merged_array] = right_array[index_of_sub_array_two];
            index_of_sub_array_two++;
        }
        index_of_merged_array++;
    }
     while (index_of_sub_array_one < sub_array_one) {
        array[index_of_merged_array] = left_array[index_of_sub_array_one];
        index_of_sub_array_one++;
        index_of_merged_array++;
    }
    while (index_of_sub_array_two < sub_array_two) {
        array[index_of_merged_array] = right_array[index_of_sub_array_two];
        index_of_sub_array_two++;
        index_of_merged_array++;
    }
 }


 void merge_sort(double *arr, int left , int right ){
    if ( left >= right)
        return;

    auto mid = left + (right - left ) / 2;
    merge_sort(arr, left , mid);
    merge_sort(arr, mid + 1, right);
    merge(arr, left , mid, right );
 }


void bucket_sort(double *tab, int n){

  




 std :: vector<double> *b = new std :: vector<double>[n +1 ]; 
   for(int i = 0; i<n; i++)  {          
      b[int(tab[i])].push_back(tab[i]);
   }
   for(int i = 0; i<n; i++) {
      quick_sort(b[i].data(),0,b[i].size() - 1);       
   }
   int index = 0;
   for(int i = 0; i<n; i++) {
      while(!b[i].empty()) {
         tab[index++] = *(b[i].begin());
         b[i].erase(b[i].begin());
      }
   }

}


void heapify(double arr[], int n, int i){
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
 
   
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
 
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
   
    if (largest != i) {
       std ::  swap(arr[i], arr[largest]);
 
       
        heapify(arr, n, largest);
    }
}

void heap_sort(double arr[], int n){
    
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    
    for (int i = n - 1; i > 0; i--) {
       
        std :: swap(arr[0], arr[i]);
 
       
        heapify(arr, i, 0);
    }
}


void insertion_sort (double *Array, int N){
  int i, j;
  double temp;
  for (i=1; i<N; ++i)
  {
    temp=Array[i];
    for (j=i; j>0 && temp<Array[j-1]; --j)
      Array[j]=Array[j-1];
    Array[j]=temp;
  }
}


int partition (double *data, int left , int right ) {
    int pivot = data[right ];
    int temp;
    int i = left ;
    for ( int j = left ; j < right; ++j){
        if (data[j ] <= pivot){
            temp = data[j];
            data[j ] = data[i ];
            data[i ] = temp;
            i++;
        }
    }

     data[right ] = data[i ];
    data[i ] = pivot;

    return i;
}


void intro_sort(double *arr , int size ) {
    int partitionSize = partition(arr , 0, size - 1);
        if ( partitionSize < 16){
            insertion_sort(arr , size );
        }
        else if ( partitionSize >(2 * std :: log( size ))){
            heap_sort(arr, size );
        }
        else{
            quick_sort(arr, 0, size -1);
        }
}


