#include <bits/stdc++.h>
using namespace std;

 void reverse(int arr[], int n)
{
	int low = 0, high = n - 1;
	while(low < high)
	{
		int temp = arr[low];    // swap arr[low]
        arr[low] = arr[high];   // and arr[high]
		arr[high] = temp;
		low++;
		high--;
	}
}
int main() {
	
      int arr[] = {10, 5, 7, 30}, n = 4;
       reverse(arr, n);

       cout<<"After Reverse"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}
