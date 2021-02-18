#include<bits/stdc++.h>
using namespace std;
int search(long long int arr[][],long long int m, long long int n, long long int x)
{
    if(m==0 && n==0)
    {
    	return -1;
	}
    long long int small=arr[0][0], larg=arr[m - 1][n - 1];
    if(x<small || x>largest)
    {
    	return -1;
	}
    // set indexes for top right element
    int i=0, j=n-1; 
    while(i<n && j>=0) 
    {
        if(mat[i][j]==x) 
        {
            cout<<"Found at "<<i<<", ";
            return j;
        }
        if(arr[i][j]>x)
        {
        	 j--;
		}
        else
        {
        	  i++;
		}
    }
    return -1;
}
int main()
{
	long long int m,n,k,i=0,j=0;
	cout<<"Enter the size of rows & colmns :";
	cin>>m>>n;
	long long int arr[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Enter the element to find :";
	cin>>k;
	cout<<search(arr,m,n,k);
}
