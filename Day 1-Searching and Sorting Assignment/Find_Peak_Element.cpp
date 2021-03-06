#include<bits/stdc++.h>
using namespace std;
/*Naive Approach
int findPeak(int arr[], int n)
{
    // first or last element is peak element
    if (n == 1) 
      return arr[0];
    if (arr[0] >= arr[1])
        return 0;
    if (arr[n - 1] >= arr[n - 2])
        return n - 1;
 
    // check for every other element
    for (int i = 1; i < n - 1; i++) {
 
        // check if the neighbors are smaller
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            return i;
    }
}
 */
findPeak(long long int arr[],long long int l,long long int h,long long int n)
{
	long long int mid=l+(h-l)/2;
	if(mid==0 && arr[mid]>=arr[mid+1] || mid==n-1 || arr[mid]>=arr[mid-1])
	{
		return mid;
	}
	else if(mid>0 && arr[mid-1]>arr[mid])
	{
		return findPeak(arr,l,mid-1,n);
	}
	else
	{
		return findPeak(arr,mid+1,h,n);
	}
}
int main()
{
	long long int n,i=0,peak=0;//n=size of array
	cout<<"Enter the array size : ";
	cin>>n;
	long long int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	peak=findPeak(arr,0,n-1,n);
	cout<<"Peak element is "<<arr[peak];
}
