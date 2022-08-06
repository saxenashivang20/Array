#include <bits/stdc++.h>
using namespace std;

// iMax = 3 (left side)
// rMax = 5 (right side)
// min(iMax,rMax)
// res[i]= min(imax,rmax)- arr[i]

int getwater(int arr[], int n){
    int res = 0;
    for(int i =1;i<n-1;i++){
        int iMax = arr[i];
        for(int j = 0;j<i;j++)
        iMax = max(iMax,arr[j]);
        int rMax=arr[i];
        for(int j =i+1;j<n;j++)
        rMax = max(rMax,arr[j]);
        res=res + (min(iMax,rMax)- arr[i]);
    }
    return res;
}
int main(){
    int arr[]={3,0,1,2,6},n=5;
    cout<<getwater(arr,n);
}