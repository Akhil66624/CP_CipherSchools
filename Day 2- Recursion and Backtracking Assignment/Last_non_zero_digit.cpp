#include<bits/stdc++.h> 
using namespace std; 
int numbers[]={1,1,2,6,4,2,2,4,2,8}; 
int non_zero_digit(int n) 
{ 
	if (n < 10) 
	{
		return numbers[n];
	}
	if(((n/10)%10)%2==0) 
	{
		return (6*non_zero_digit(n/5)*numbers[n%10])%10; 
	}
	else
	{
		return (4*non_zero_digit(n/5)*numbers[n%10])%10; 
	}
} 
int main() 
{ 
	int n;
	cout<<"Enter the number :";
	cin>>n;
	cout<<"The last non zero digit is "<<non_zero_digit(n); 
	return 0; 
} 

