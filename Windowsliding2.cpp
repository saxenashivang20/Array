#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n, int k){
    int curr_sum= 0;
    for(int i=0;i<k;i++)
    curr_sum+=arr[i];    // sum of first window (3 elements)    
    int max_sum= curr_sum;
    for(int i = k;i<n;i++){     // i indicates end 
    curr_sum+=(arr[i]-arr[i-k]);  // of current window 
    max_sum=max(max_sum,curr_sum);
    }
    return max_sum;
}

int main(){
    int arr[]= {1,8,30,-5,20,7}, n=6, k=3;  // Time complexity is O(n)
    cout<<maxSum(arr,n,k);
}

// I/P : arr[]= {1,8,30,-5,20,7} substract 1 & add -5 for all 
// One addition and one substraction 