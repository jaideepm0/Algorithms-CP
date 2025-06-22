#include <stdio.h>
#include <stdlib.h>

int binary(int* arr, int n, int key);

int main(){

    int* arr = malloc(10 * sizeof(int));
    for(int i = 0; i < 10; i++)
        scanf("%d", arr + i);
    int key;
    scanf("%d", &key);
    int ind = binary(arr, 10, key);
    printf("%d\n", ind);
    free(arr);
    return 0;
}

int binary(int* arr, int n, int key){
    int find = -1;
    int i = 0, j = n - 1;
    while(i < j){
        find = (i + j) / 2;
        if(*(arr + find) == key)
            return find;
        else if(*(arr + find) < key)
            i = find + 1;
        else
            j = find - 1;
    }
    return -1;
}
