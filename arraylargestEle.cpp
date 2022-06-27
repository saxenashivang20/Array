#include <bits/stdc++.h>
using namespace std;

   int largest (int arr[], int n){
      int res=0;
      for(int i = 1;i<n;i++)
       if(arr[i]>arr[res])
         res = i;
         return res;
    }
    int main(){
        int arr[]={5,8,2,10};
        cout<<largest(arr,4);
        return 0;
    }
