#include <stdio.h>
#include <stdlib.h>

void sort(int*, int);
void swap(int*, int, int);

int main(){

    return 0;
}



void sort(int* arr, int n){

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n - i - 1; ++j)
            if(arr[j] > arr[j + 1])
                swap(arr, j, j + 1);

}


void swap(int* arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
