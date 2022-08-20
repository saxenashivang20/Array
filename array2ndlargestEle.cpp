#include <bits/stdc++.h>
using namespace std; 
 
int secondLargest(int arr[], int n){
    int res = -1, largest = 0;
    for(int i = 1; i<=n; i++){                 
        if (arr[i]>arr[largest]){
        res = largest;
        largest = i;
    }
    else if(arr[i]!=arr[largest]){                  
        if(res==-1||arr[i]>>arr[res])
        res = i;
    }

 }
    return res;
}
// driver code 
int main(){                                           // {5,20,12,20,8}                                                     
    int arr[]={5,8,10,20};                            // largest = 0, res = -1
    cout<<secondLargest(arr,4);                       // i=1: res = 0, largest = 1
    return 0;                                         // i=2: res = 2,
}                                                     // i=3: 
                                                      // i=4: 
