#include "iostream"
#include "vector"

using namespace std;

int search(vector<int>&, int);

int main(){

    return 0;
}

int search(vector<int>& arr, int value){

    int n = arr.size();
    int i = 0, j = n - 1;
    int m = (i + j) / 2;
    for(;i <= j; m = (i + j) / 2){
        if(arr[m] == value)
            return m;
        else if(arr[m] < value)
            i = m + 1;
        else
            j = m - 1;
    }
    return -1;
}
