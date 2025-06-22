#include "stdio.h"
#include "stdlib.h"

// The code is Complete

void sort(int* , int);

int main(){

    int n;
    scanf("%d", &n);
    int* arr = malloc(sizeof(int) * n);
    for(int i = 0; i < n; ++i)
        scanf("%d", arr + i);

    sort(arr, n);

    for(int i = 0; i < n; ++i)
        printf("%d ", *(arr + i));

    return 0;
}

void sort(int* arr, int n){

    int min, minI;
    for(int i = 0; i < n; ++i){
        min = arr[i];
        minI = i;
        for(int j = i + 1; j < n; ++j){
            if(arr[j] < min){
                min = arr[j];
                minI = j;
            }
        }
        arr[minI] = arr[i];
        arr[i] = min;
    }
}
