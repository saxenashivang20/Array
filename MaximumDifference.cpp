#include <bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int n){
    int res = arr[1] - arr[0]; // initalise result as 1st pair 
    for(int i = 0; i<n-1; i++){
        for(int j = i+1;j<n;j++){
            res= max(res,arr[j]-arr[i]);
        }
            return res; 
        }
    }
int main(){
    int arr[]= {2,3,10,6,4,8,1},n=7;
    cout<<maxDiff(arr,n);
    
}

// Maximum value of arr[j] - arr[i] such that j>i
