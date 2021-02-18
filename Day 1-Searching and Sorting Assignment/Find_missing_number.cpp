#include <bits/stdc++.h>
using namespace std;
int missingNo(int arr1[],int n)
{
	int a=arr1[0];
	int b=1;
	for(int i=1;i<n;i++)
	{
		a=a^arr1[i];
	}
	for(int i=2;i<=n+1;i++)
	{
		b=b^i;
	}

	return (a^b);
}
int main()
{
	int n,i=0;
	cout<<"Enter array size :";
	cin>>n;
	int arr[n];
    cout<<"Enter array elements :";
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
	cout<<"Missing Number is "<<missingNo(arr,n);
	
}

