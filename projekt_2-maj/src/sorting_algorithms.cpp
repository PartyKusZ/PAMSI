#include"sorting_algorithms.hpp"

void quick_sort(double *tab, int left, int right){
	if(right <= left) return;
	
	int i = left - 1, j = right + 1, pivot = tab[(left+right)/2]; 
	
	while(1)
	{
		
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
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;
    double *leftArray = new double[subArrayOne];
    double *rightArray = new double[subArrayTwo];
    for ( int i = 0; i < subArrayOne; i++)
        leftArray [ i ] = array[ left + i ];
    for ( int j = 0; j < subArrayTwo; j++)
         rightArray[ j ] = array[mid + 1 + j];
    int indexOfSubArrayOne = 0;
    int indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray [indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
     while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
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


void bucket_sort(double *tab, int how_many, double max_value){

    double p = max_value / how_many;
    std :: vector<double> buckets[how_many+1];
    for(int i = 0; i < how_many; ++i){
        buckets[static_cast<int>(tab[i] / p)].push_back(tab[i]);
    }
    for(int i = 0; i < how_many; ++i){
        if(buckets[i].size() > 1){
            quick_sort(buckets[i].data(),0,buckets[i].size() - 1);
        }
    }
    for(int i = 0, g = 0; i < how_many + 1; ++i){
        for(int j = 0; j < buckets[i].size(); ++j){
            tab[g++] = buckets[i][j];
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
        // Move current root to end
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


