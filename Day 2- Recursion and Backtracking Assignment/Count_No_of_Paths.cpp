#include <bits/stdc++.h>
using namespace std;
int count_paths(int m,int n)
{
	if(m==1 || n==1)
	{
		return 1;
	}
	else
	{
       return count_paths(m,n-1)+count_paths(m-1,n);
	}
}
int main()
{
	int m,n;
	cout<<"Enter No.of rows :";
	cin>>m;
	cout<<"Enter No.of coloumns :";
	cin>>n;
	cout<<"No.of Paths :"<<count_paths(m,n);
}
