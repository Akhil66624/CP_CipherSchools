#include <bits/stdc++.h>
using namespace std; 
void Prev_Smaller(int arr[], int n) 
{ 
	stack<int> S; 
	for (int i=0; i<n; i++) 
	{ 
		
		while (!S.empty() && S.top() >= arr[i]) 
		{
			S.pop(); 
		}
		if (S.empty()) 
		{
			cout << "_, "; 
		}
		else 
		{
			cout << S.top() << ", "; 
		}
		S.push(arr[i]); 
	} 
} 
int main() 
{ 
	int n,i=0;
	cout<<"Enter size of array :";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements :";
	for (int i = 0; i < n; ++i)
	 {
	 	cin>>arr[i];
	 } 
	Prev_Smaller(arr, n); 
	return 0; 
} 

