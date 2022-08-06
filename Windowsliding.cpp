#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n, int k){
    int max_sum = INT_MIN;
    for(int i = 1;i + k - 1<n;i++){     // Time complexity is O(n2)
        int sum =0;
        for(int j = 0;j < k; j++){
            sum += arr[i + j];
        }
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}

int main(){
    int arr[]= {1,8,30,-5,20,7}, n= 6, k = 3;
    cout<<maxSum(arr,n, k );
}