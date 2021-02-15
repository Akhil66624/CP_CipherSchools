#include <bits/stdc++.h>
using namespace std;
findKelements(long long int arr[], long long int n, long long int k)
{
	sort(arr,arr+n);
	for(int i=0;i<k;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
int main()
{
	long long int n,k,i=0;
	cout<<"Enter array size :";
	cin>>n;
    long long int arr[n];
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    cout<<"Enter k :";
	cin>>k;
    findKelements(arr, n, k);
    return 0;
}
