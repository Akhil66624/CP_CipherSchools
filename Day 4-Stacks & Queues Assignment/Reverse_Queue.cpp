#include <bits/stdc++.h> 
using namespace std; 
void reverseQueue(queue<int> &Q)
{
	if(Q.empty())
	{
		return;
	}
	else
	{
		int x=Q.front();
		Q.pop();
		reverseQueue(Q);
		Q.push(x);
	}
}
int main()
{
    queue<int> q,q1;
    for (int i = 0; i < 20; i++)
    {
        q.push(i + 1);
        q1.push(i + 1);
    }
    cout<<"Queue elements are : ";
    while(!q1.empty())
    {
    	cout<<q1.front()<<" ";
    	q1.pop();
	}
    reverseQueue(q);
    cout<<"\n\nQueue elements after reversing are : ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}

