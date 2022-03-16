#include"sorting.hpp"

void t_sort :: sort(t_vector<part_of_message> &tab,int left,int right, t_comprasion_more comp){

    part_of_message tmp;

    int i = left;
    int j = right;
    int pivot = tab.size() / 2;

   do{
        while(comp(tab[pivot],tab[i])){
        i++;
    }

    while(comp(tab[j],tab[pivot])){
        j--;
    }

    if(i <= j){
        tmp = tab[i];
        tab[i] = tab[j];
        tab[j] = tmp;
        i++;
        j--;
    }

   }while(i <= j);
   
   if(left < j)
        sort(tab,left,j,comp);
   if(right > i)
        sort(tab,i,right,comp);

}