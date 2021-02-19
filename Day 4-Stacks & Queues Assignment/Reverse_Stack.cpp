#include <bits/stdc++.h> 
using namespace std; 
void insert_at_Bottom(stack<int> &S,int temp)
{
	if(S.empty())
	{
		S.push(temp);
	}
	else
	{
		int temp1;
		temp1=S.top();
		S.pop();
		insert_at_Bottom(S,temp);
		S.push(temp1);
	}
}
void reverseStack(stack<int> &S)
{
	
	if(!S.empty())
	{
		int temp;
        temp=S.top();
		S.pop();
		reverseStack(S);
		insert_at_Bottom(S,temp);
	}
	
}
int main()
{
    stack<int> S,s1;
    for (int i = 0; i < 10; i++)
    {
        S.push(i + 1);
        s1.push(i + 1);
    }
    cout<<"Stack elements are : ";
    while(!s1.empty())
    {
    	cout<<s1.top()<<" ";
    	s1.pop();
	}
    reverseStack(S);
    cout<<"\n\n\nStack elements after reversing are : ";
    while (!S.empty())
    {
        cout << S.top() << " ";
        S.pop();
    }
    return 0;
}
