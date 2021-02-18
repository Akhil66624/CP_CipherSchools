#include <bits/stdc++.h>
using namespace std;
void findindexes(int arr[],int n,int x)
{
    int first=-1,last=-1;
    for(int i=0;i<n;i++) 
	{
        if(x!=arr[i])
        {
        	continue;
		}
        if(first==-1)
        {
        	 first = i;
		}
        last = i;
    }
    if(first!=-1)
    {
    	cout<<"First Occurrence = "<<first<<" & Last Occurrence = " <<last;
	}  
    else
    {
    	cout<<"Not Found";
	}
        
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
    cout<<"Enter element to find :";
	cin>>k;
    findindexes(arr, n, k);
    return 0;
}
