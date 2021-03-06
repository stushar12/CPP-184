#include<bits/stdc++.h>
using namespace std;
int findPivot(int arr[], int low, int high) 
{ 
  // base cases 
  if (high < low) return -1; 
  if (high == low) return low; 

  int mid = (low + high)/2; 
  if (mid < high && arr[mid] > arr[mid + 1]) 
   return mid; 

  if (mid > low && arr[mid] < arr[mid - 1]) 
   return (mid-1); 
							//eg.{4,5,6,7,1,2,3}
 if (arr[mid] <= arr[low]) 
  return findPivot(arr, low, mid-1); 			//pivot element is on the left side

 return findPivot(arr, mid + 1, high); 			//else pivot element is on right side
} 

int main()
{
	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++)
	cin>>arr[i];
    int res;
    if(arr[0]>arr[n-1])             //checking if array is already sorted or not
    {
     res= findPivot(arr,0,n-1);
     if(res==-1)
    cout<<"No pivot element";
    else
    cout<<arr[res];
    }
    else
    {
        cout<<arr[n-1];
    }

}
