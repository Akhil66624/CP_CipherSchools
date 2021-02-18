#include <bits/stdc++.h> 
using namespace std; 
void sortArray(int a[], int arr_size) 
{ 
	int lo = 0; 
	int hi = arr_size - 1; 
	int mid = 0; 
	while (mid <= hi) 
	{ 
		switch (a[mid]) 
		{ 
		case 0: 
			swap(a[lo++], a[mid++]); 
			break;  
		case 1: 
			mid++; 
			break; 
		case 2: 
			swap(a[mid], a[hi--]); 
			break; 
		} 
	} 
} 
int main() 
{ 
	int n =12,i=0;
	cout<<"Enter Array size :";
	cin>>n;
	int arr[n];
	cout<<"Enter Array elements(only 0,1,2) :";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sortArray(arr, n); 
	cout << "Array after sorting"; 
	for(i=0;i<n;i++) 
	{
		cout<<arr[i]<<" "; 
	}
	return 0; 
} 


