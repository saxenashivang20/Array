#include <bits/stdc++.h>
using namespace std;

void freq(int arr[], int n){
    int freq =1;
    int i = 1;
    while(i<n){
        while(i<n && arr[i]==arr[i - 1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }
}
int main(){
    int arr[]={10,10,10,25,30,30}, n=6;
    freq(arr,n);
}