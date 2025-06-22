#include <stdio.h>
#include <stdlib.h>

void sort(int* arr, int n);

// The Code is Complete

int main(){

    int n;
    scanf("%d", &n);
    int* arr = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
        scanf("%d", (arr + i));

    sort(arr, n);

    for(int i = 0; i < n; i++)
        printf("%d ", *(arr + i));

    free(arr);

    return 0;
}


void sort(int* arr, int n){

    int j, pivot;
    for(int i = 1; i < n; i++){
        pivot = *(arr + i);
        j = i - 1;
        while(j >= 0 && *(arr + j) > pivot){
            *(arr + j + 1) = *(arr + j);
            j--;
        }
        *(arr + j + 1) = pivot;
    }
}
