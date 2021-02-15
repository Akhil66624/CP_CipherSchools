#include <bits/stdc++.h>
using namespace std;
int largestsubarray(int a[], int size)
{
    int max_sum=INT_MIN, max_ending_here=0;
 
    for(int i=0;i<size;i++)
    {
        max_ending_here = max_ending_here+a[i];
        if(max_sum < max_ending_here)
        {
        	max_sum = max_ending_here;
		}
        if(max_ending_here<0)
        {
        	max_ending_here=0;
		}   
    }
    return max_sum;
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
	cout<<"Largest sub-array sum is "<<largestsubarray(arr,n);
}
