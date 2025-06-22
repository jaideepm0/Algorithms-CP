#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int>&);

int main(){

    return 0;
}

void sort(vector<int> &arr){

    int n = arr.size();
    for(int i = 1; i < n; ++i){
        int j = i - 1;
        int pivot = arr[i];
        while(j > 0 && arr[j] > pivot){
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = pivot;
    }
}
