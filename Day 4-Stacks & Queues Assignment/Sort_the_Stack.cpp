#include <bits/stdc++.h> 
using namespace std; 
void Sort_Stack_Recursive(stack<int> &S,int temp)
{
	if(S.empty() || temp>=S.top())
	{
		S.push(temp);
	}
	else
	{
		int temp1;
		temp1=S.top();
		S.pop();
		Sort_Stack_Recursive(S,temp);
		S.push(temp1);
	}
}
void Sort_Stack(stack<int> &S)
{
	
	if(!S.empty())
	{
		int temp;
        temp=S.top();
		S.pop();
		Sort_Stack(S);
		Sort_Stack_Recursive(S,temp);
	}
	
}
int main()
{
    stack<int> S,s1;
    S.push(5);
    s1.push(5);
    S.push(85);
    s1.push(85);
    S.push(49);
    s1.push(49);
    S.push(0);
    s1.push(0);
    S.push(11);
    s1.push(11);
    S.push(65);
    s1.push(65);
    S.push(19);
    s1.push(19);
    S.push(50);
    s1.push(50);
    cout<<"Stack elements are : ";
    while(!s1.empty())
    {
    	cout<<s1.top()<<" ";
    	s1.pop();
	}
    Sort_Stack(S);
    cout<<"\n\n\nStack elements after reversing are : ";
    while (!S.empty())
    {
        cout << S.top() << " ";
        S.pop();
    }
    return 0;
}
