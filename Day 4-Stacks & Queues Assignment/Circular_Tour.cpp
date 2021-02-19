#include <bits/stdc++.h> 
using namespace std; 
class petrolPump 
{ 
	public: 
	int petrol; 
	int distance; 
}; 
int printTour(petrolPump arr[], int n) 
{ 
	int start = 0; 
	int end = 1; 

	int curr_petrol = arr[start].petrol - arr[start].distance; 
	while (end != start || curr_petrol < 0) 
	{ 
		while (curr_petrol < 0 && start != end) 
		{ 
			curr_petrol -= arr[start].petrol - arr[start].distance; 
			start = (start + 1) % n; 

			if (start == 0) 
			return -1; 
		}
		curr_petrol += arr[end].petrol - arr[end].distance; 

		end = (end + 1) % n; 
	} 
	return start; 
}
int main() 
{
	int n,i=0,start;
	cout<<"Enter the size of array :";
	cin>>n;
	petrolPump arr[n];
	cout<<"Enter two array elements :";
	for (int i = 0; i < n; ++i)
	{
		int x,y;
	 	cin>>x>>y;
	 	arr[i].petrol=x;
	 	arr[i].41distance=y;
	} 
	start = printTour(arr, n); 
	return 0; 
}
