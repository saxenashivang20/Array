#include <bits/stdc++.h>
using namespace std;

bool Eqpoint(int arr[], int n){
    int sum = 0;
    for(int i =0;i<n;i++)
    sum+=arr[i];                   //sum of array
    int l_sum=0;                   //initiate left sum 
    for(int i =0;i<n;i++){         // as zero
        if(l_sum== sum- arr[i])
        return true;
        l_sum+=arr[i];
        sum-=arr[i];
    }
    return false;
}
int main(){
    int arr[]={3,4,8,-9,20,6}, n=6;
    cout<<("%s",Eqpoint(arr, n)? "true" : "false");
}
