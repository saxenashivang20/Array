#include <bits/stdc++.h>
using namespace std;
void leader(int arr[], int n){
    int curr_ldr=arr[n-1];
    cout<<curr_ldr<<" ";    // we print last element as current leader and 
    for(int i=n-2;i>0;i--){ // run a loop from left to right 
        if(curr_ldr<arr[i])
        {
            curr_ldr = arr[i];
            cout<<curr_ldr<<" ";
        }
    }
}
int main(){
    int arr[]={7,10,4,3,6,5,2}, n = 7;
    leader(arr,n);
}