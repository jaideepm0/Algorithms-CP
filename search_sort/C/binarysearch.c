#include <stdio.h>

int binay_search(int arr[], int key){

    int n = 10;
    printf("%d\n", n);
    int i = 0, j = n - 1, m;
    while(i <= j){
        m = (i + j) / 2;
        if(arr[m] == key)
            return m;
        else if(arr[m] > key)
            j = m - 1;
        else
            i = m + 1;
    }
    return -1;
}


int main(){

    int arr[] = {1,2,3,6,7,8,9,12,646,32621};
    int key = 6;
    printf("%d\n", binay_search(arr, key));
    return 0;
}
