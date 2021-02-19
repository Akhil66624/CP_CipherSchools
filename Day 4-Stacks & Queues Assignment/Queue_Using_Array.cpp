#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=0;
	cout<<"Enter the size of Queue :";
	cin>>n;
	int queue[n],front=0,rear=0;
	cout<<"Enter Queue elements :";
	for (int i = 0; i < n;i++)
	{
		if(rear+1<=n)
		{
			cin>>queue[rear++];
		}
		else
		{
			cout<<"Queue is Full";
		}
		
	}
	cout<<"Queue Elements are : ";
	while(front!=rear)
	{
		cout<<queue[front]<<" ";
		front++;
	}
	front=0;
	rear=0;
	return 0;
}
