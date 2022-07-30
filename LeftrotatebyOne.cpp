#include <iostream>
using namespace std;
void rotateone(int arr[], int n){
    int temp = arr[0];
    for(int i =1; i<n;i++)              // Rotate it Anti clock wise 
    arr[i-1]=arr[i];                    // input = {1,2,3,4}
    arr[n-1]=temp;                      // output = {2,3,4,1}
}
int main(){
    int arr[]={1,2,3,4},n=4;
    rotateone(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
