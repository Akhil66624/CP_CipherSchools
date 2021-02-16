#include <cstring>
#include <iostream>
using namespace std;
int count_total_ways(char* digits, int n)
{
	int count=0; 
	if(n==0||n==1)
	{
		return 1;	
	}
	if(digits[0]=='0')
	{
		return 0;
	}
	if(digits[n-1]>'0')
	{
		count=count_total_ways(digits,n-1);
	}

	if(digits[n-2]=='1'|| (digits[n-2]=='2' && digits[n-1]< '7'))
	{
		count+=count_total_ways(digits,n-2);
	}

	return count;
}


int count(char* digits, int n)
{
	if(n==0 || (n==1 && digits[0]=='0'))
	{
		return 0;
	}
	return count_total_ways(digits, n);
}

int main()
{
	int n;
	cout<<"Enter the sequence size :";
	cin>>n;
	char digits[n+1];
	cout<<"Enter the sequence :";
	cin>>digits;
	cout<<count(digits,n);
	return 0;
}

