#include <bits/stdc++.h>
using namespace std;

void get_max_in_queue(queue<int> q)
{
    int max = 0;
    while (!q.empty())
    {
        if (q.front() > max)
        {
            max = q.front();
        }
        q.pop();
    }
 
    cout << max << " ";
    return;
}
 
void sliding_window_maximum(vector<int>& arr, int K)
{
    int size = arr.size();
    queue<int> q;
    for (int i = 0; i < size; i++)
    {
        if (i < K) 
        {
            q.push(arr[i]);
        }
        else
        {
            get_max_in_queue(q);
            q.pop();
            q.push(arr[i]);
        }
    }
    get_max_in_queue(q);
    return;
}
int main() 
{
    int n,i=0,k;
	vector<int> vec;
	cout<<"Enter the size :";
	cin>>n;
	cout<<"Enter the elements :";
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		vec.push_back(x);
	}
	cout<<"Enter k :";
	cin>>k;
	sliding_window_maximum(vec,k);
	return 0;
}
