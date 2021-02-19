#include <bits/stdc++.h>
using namespace std;

bool isMatching(char open, char close)
{
    return ((open == '(' && close == ')') || (open == '{' && close == '}') || (open == '[' && close == ']'));
}

bool isValid(string str)
{
    stack<char> S;
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            S.push(str[i]);
        }
        else
        {
            if (S.empty())
            {
        	 return false;
		    }
             char open = S.top(); S.pop();
            if (!isMatching(open, str[i]))
            {
            return false;	
			}
        }
    }
    if (S.empty())
        return true;
    return false;
}

int main()
{
	string s;
	cout<<"Enter the string :";
	cin>>s;
	if(isvalid(s))
	{
		cout<<"Yes, Valid parentheses";
	}
	else
	{
		cout<<"No, not a Valid parentheses";
	}
}
