#include <iostream>
using namespace std;
int trailingZeros(int n)
{
	int count = 0;
	for(int i=5;(n/i)>=1;i=i*5)
	{
		count+=(n/i);
	}
	return count;	
}
int main()
{
	int n;
	cout<<"Enter the number n :";
	cin>>n;
	cout << "Count of trailing 0s is "<<trailingZeros(n);
	return 0;
}

