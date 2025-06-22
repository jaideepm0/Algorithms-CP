#include <stdlib.h>
#include <stdio.h>

int* merge(int*, int*, int, int, int, int);

int* sort(int*, int, int);

int main(){
    int n;
    scanf("%d", &n);
    int* arr = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
        scanf("%d", arr + i);
    int* x = sort(arr, 0, n - 1);
    for(int i = 0; i < n; i++)
        printf("%d ", *(x + i));
    free(arr);
    free(x);
    return 0;
}



int* merge(int* A, int* B, int A_b, int A_e, int B_b, int B_e){

    int n = A_e - A_b + 1, m = B_e - B_b + 1;
    int i = A_b, j = B_b, k = 0;
    int* final = malloc(sizeof(int) * (n + m));
    while(i <= A_e && j <= B_e){
        if(A[i] < B[j]){
            final[k] = A[i];
            ++i;
        }
        else{
            final[k] = B[j];
            ++j;
        }
        ++k;
    }
    for(;i <= A_e; i++, ++k)
        final[k] = A[i];
    for(;j <= B_e; j++, ++k)
        final[k] = B[j];
    free(A);
    free(B);
    return final;
}



int* sort(int* arr, int B, int E){

    if(B == E){
        int* temp = malloc(sizeof(int));
        temp[0] = arr[B];
        return temp;
    }
    else if(B > E)
        return NULL;
    int mid = (B + E) / 2;
    int* left = sort(arr, B, mid);
    int* right = sort(arr, mid + 1, E);
    if(! left && ! right)
        return NULL;
    else if(! left)
        return right;
    else if(! right)
        return left;
    return merge(left, right, 0, mid - B, 0, E - mid - 1);
}
