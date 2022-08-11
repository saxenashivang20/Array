#include <bits/stdc++.h>
using namespace std;
void movezeroes(int arr[], int n){  // main function 
    int count= 0;
    for(int i =0; i<n;i++){
        if(arr[]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
