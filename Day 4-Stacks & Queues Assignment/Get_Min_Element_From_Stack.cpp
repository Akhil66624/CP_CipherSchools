#include <bits/stdc++.h> 
using namespace std; 
struct Stack 
{ 
	stack<int> s; 
	int minEle; 
	void getMin() 
	{ 
		if (s.empty()) 
		{
			cout << "Stack is empty\n"; 
		}
		else
		{
			cout <<"Minimum Element is: "<< minEle << "\n"; 
		}
	} 
	void peek() 
	{ 
		if (s.empty()) 
		{ 
			cout << "Stack is empty "; 
			return; 
		} 

		int temp = s.top(); 
		cout << "Top Element is: "; 
		(temp < minEle)? cout << minEle: cout << temp; 
	} 
	void pop() 
	{ 
		if (s.empty()) 
		{ 
			cout << "Stack is empty\n"; 
			return; 
		}
		cout << "Top Element Removed: "; 
		int temp = s.top(); 
		s.pop(); 
		if (temp < minEle) 
		{ 
			cout << minEle << "\n"; 
			minEle = 2*minEle - temp; 
		} 
		else
		{
			cout << temp << "\n"; 
		}
	} 
	void push(int x) 
	{ 
		if (s.empty()) 
		{ 
			minEle = x; 
			s.push(x); 
			cout << "Inserted: " << x << "\n"; 
			return; 
		}
		if (x < minEle) 
		{ 
			s.push(2*x - minEle); 
			minEle = x; 
		} 
		else
		{
 		s.push(x); 
		cout << "Inserted: " << x << "\n"; 
		}
		
	} 
}; 
int main() 
{ 
	Stack s; 
    s.push(25); 
    s.push(5); 
    s.push(2); 
    s.push(12); 
    s.push(0);
    s.push(6);  
    s.getMin(); 
    s.push(2); 
    s.push(1); 
    s.push(-3);
    s.push(50); 
    s.push(-50);
    s.push(-80);   
    s.getMin(); 
    s.pop(); 
    s.getMin(); 
    s.pop(); 
     s.pop(); 
    s.pop(); 
    s.peek();
    s.getMin(); 

	return 0; 
} 

