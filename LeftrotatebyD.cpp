#include <bits/stdc++.h>
using namespace std;


void leftRotate(int arr[], int d, int n)
{
	int temp[d];

	for(int i = 0; i  < d; i++)
	{
		temp[i] = arr[i];
	}

	for(int i = d; i  < n; i++)
	{
		arr[i - d] = arr[i];
	}

	for(int i = 0; i  < d; i++)
	{
		arr[n - d + i] = temp[i];
	}	
}
    
int main() {
	
      int arr[] = {1, 2, 3, 4, 5}, n = 5, d = 2;

       leftRotate(arr, d, n);

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}