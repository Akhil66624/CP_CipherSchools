#include <bits/stdc++.h> 
using namespace std; 
bool find_duplicate_parenthesis(string str) 
{ 
	
	stack<char> Stack; 
	for (char ch : str) 
	{ 
		if (ch == ')') 
		{ 
			
			char top = Stack.top(); 
			Stack.pop(); 
			int elementsInside = 0; 
			while (top != '(') 
			{ 
				elementsInside++; 
				top = Stack.top(); 
				Stack.pop(); 
			} 
			if(elementsInside < 1) 
			{ 
				return 1; 
			} 
		} 
		else
		{
			Stack.push(ch); 
		}
	} 
	return false; 
} 
int main() 
{ 
	string str = ""; 
	cout<<"Enter the string with parentheses :";
	if(find_duplicate_parenthesis(str)) 
	{
		cout << "Duplicate Found "; 
	}
	else
	{
		cout << "No Duplicates Found "; 
	}

	return 0; 
} 

