#include <bits/stdc++.h>
using namespace std;
int minPlatforms(int arr[], int dep[], int n)
{
    int plat=1,res=1;
    int i=1,j=0;

    for(int i=0;i<n;i++) 
	{
        plat=1;
 
        for(int j=i+1;j<n;j++) 
		{
            if ((arr[i] >= arr[j] && arr[i] <= dep[j]) || (arr[j] >= arr[i] && arr[j] <= dep[i]))
            {
            	 plat++;
			}
               
        }
        res=max(res,plat);
    }
    return res;
}
int main()
{
    int n,i=0;
	cout<<"Enter array size :";
	cin>>n;
    int arr[n],dept[n];
    cout<<"Enetr arrival elements :";
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	cout<<"Enetr departure elements :";
    for(i=0;i<n;i++)
    {
    	cin>>dept[i];
	}
	cout<<"Minimum platforms are "<<minPlatforms(arr,dept,n);
}
