#include <bits/stdc++.h>
using namespace std;
int removeduplicate(int arr[], int n){
    int res = 1;
    for(int i = 1; i<n; i++){
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}
int main(){
    int arr[]={10,20,20,30,30}, n=5;   
     n = removeduplicate(arr,n);
     for(int i = 0; i<n;i++){
        cout<<arr[i]<<"  ";
     }
     return 0;
}