#include <bits/stdc++.h>
using namespace std;
int getCount(int arr[], int n)
{
    int count = 0;
    for(int i=0;i<n-1;i++)
    {
    	for(int j=i+1;j<n;j++)
    	{
    		if(arr[i]>arr[j])
    		{
    		  count++;
			} 
		}
	}
    return count;
}
int main()
{
    int n,k,i=0;
	cout<<"Enter array size :";
	cin>>n;
    int arr[n];
    cout<<"Enetr array elements :"
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	cout<<"Inversion count is "<<getCount(arr,n);
}
