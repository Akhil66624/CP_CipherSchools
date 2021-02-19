#include <bits/stdc++.h> 
using namespace std; 
void first_to_last(queue<int> &Q,int qsize)
{
	while(qsize--)
	{
		Q.push(Q.front());
		Q.pop();
	}
	/*if(qsize<=0)
	{
		return;
	}
	else
	{
		Q.push(Q.front());
		Q.pop();
		first_to_last(Q,qsize-1);
	}*/
}
void pushInQueue(queue<int>& q, int temp, int qsize) 
{ 
    if (q.empty() || qsize == 0)
	{ 
        q.push(temp); 
        return; 
    } 
    else if (temp <= q.front())
	{ 
        q.push(temp);
        first_to_last(q, qsize); 
    } 
    else
	{ 
        q.push(q.front()); 
        q.pop(); 
        pushInQueue(q, temp, qsize - 1); 
    } 
} 
void Sort_Queue(queue<int> &Q)
{
	if(Q.empty())
	{
		return;
	}
	else
	{
		int x=Q.front();
		Q.pop();
		Sort_Queue(Q);
		pushInQueue(Q, x, Q.size());
	}
}
int main()
{
    queue<int> q,q1;
   q.push(5);
    q1.push(5);
    q.push(85);
    q1.push(85);
    q.push(49);
    q1.push(49);
    q.push(0);
    q1.push(0);
    q1.push(11);
    q.push(65);
    q1.push(65);
    q.push(19);
    q1.push(19);
    q.push(50);
    q1.push(50);
    cout<<"Queue elements are : ";
    while(!q1.empty())
    {
    	cout<<q1.front()<<" ";
    	q1.pop();
	}
    Sort_Queue(q);
    cout<<"\n\nQueue elements after sorting are : ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}

