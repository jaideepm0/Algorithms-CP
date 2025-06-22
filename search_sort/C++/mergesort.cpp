#include "vector"
#include "iostream"

using namespace std;

// vector<int> merge_(vector<int>, vector<int>);
//
// vector<int> sort_(vector<int>);


int main(){

    return 0;
}


vector<int> merge_(vector<int>& A, vector<int>& B){
    int n = A.size(), m = B.size(), i = 0, j = 0, k = 0;
    vector<int> C(n + m, 0);
    while(i < n && j < m){
        if(A[i] < B[i])
            C[++k] = A[++i];
        else
            C[++k] = B[++j];
    }
    for(;i < n; ++i)
        C[++k] = A[++i];
    for(;j < m; ++j)
        C[++k] = B[++j];

    return C;
}


vector<int> sort_(vector<int>& arr){

    int n = arr.size();
    if(n <= 1)
        return arr;
    int mid = n / 2;
    vector<int> A(mid + 1, 0);
    for(int i = 0; i < mid; ++i)
        A[i] = arr[i];
    vector<int> B(n - mid, 0);
    for(int i = mid; i < n; i++)
        B[mid - i] = arr[i];
    A = sort_(A);
    B = sort_(B);
    return merge_(A, B);

}
