#include<bits/stdc++.h>
using namespace std;
static vector<string> res;
void parantheses_recursive(int open, int close,int n, string str)
{
	if(open<0 || close<0 || open>n || close>n || close>open)
	{
		return;
	}
	if(open==n && close==n)
	{
		res.push_back(str);
		return;
	}
	parantheses_recursive(open+1,close,n,str+"{");
	parantheses_recursive(open,close+1,n,str+"}");
}
void parantheses(int n)
{
	if(n>0)
	{
	   parantheses_recursive(0,0,n,"");
	}
	else
	{
		return;
	}
}
int main()
{
	int n;
	cout<<"Enter the no.of parentheses :";
	cin>>n;
	parantheses(n);
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<endl;
	}
}
