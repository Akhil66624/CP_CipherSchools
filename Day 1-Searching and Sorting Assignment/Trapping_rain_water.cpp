#include <bits/stdc++.h>
using namespace std;
int trappingWater(int arr[], int n)
{
   
    vector<int> left(n, 0);
    vector<int> right(n, 0); 
    int water = 0;

    left[0] = arr[0];
    for (int i = 1;i < n;i++) 
	{
        left[i] = max(left[i - 1], arr[i]);
    }
    right[n-1] = arr[n-1]; 
    for (int i = n - 2;i >= 0;i--)
	{
        right[i] = max(right[i + 1], arr[i]);
    }
    for (int i = 0;i < n;i++) 
	{
        water += max(0, min(left[i], right[i]) - arr[i]);
    }
    return water;
}
int main()
{
	int n,k,i=0;
	cout<<"Enter array size :";
	cin>>n;
    int arr[n];
    cout<<"Enetr array elements :";
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	cout<<trappingWater(arr,n);
}

