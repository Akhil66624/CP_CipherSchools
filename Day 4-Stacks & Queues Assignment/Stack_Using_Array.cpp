#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=0;
	cout<<"Enter the size of stack :";
	cin>>n;
	int stack[n],top=-1;
	cout<<"Enter Stack Elements are :";
	for (int i = 0; i < n;i++)
	{
		if(top+1<=n)
		{
			cin>>stack[++top];
		}
		else
		{
			cout<<"Stack is Full";
		}
		
	}
	cout<<"Stack Elements are : ";
	while(top>=0)
	{
		cout<<stack[top]<<" ";
		top--;
	}
	return 0;
}
