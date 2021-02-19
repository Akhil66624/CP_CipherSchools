#include <bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int> &heights)
{
    int area = 0, maxArea = 0, tp = 0, i = 0, N = heights.size();
    stack<int> S;
    while  (i < N)
    {
        if (S.empty() || heights[S.top()] <= heights[i])
            S.push(i++);
        else
        {
            tp = S.top(); S.pop();
            if (S.empty())
                area = heights[tp] * i;
            else
                area = heights[tp] * (i - S.top() - 1);

            maxArea = max(maxArea, area);
        }
    }
    while (!S.empty())
    {
        tp = heights[S.top()]; S.pop();
        if (S.empty())
            area = heights[tp] * i;
        else
            area = heights[tp] * (i - S.top() - 1);
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int main()
{
	int n,i=0,x;
	vector<int> vec;
	cout<<"Enter the size :";
	cin>>n;
	cout<<"Enter the elements :";
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		vec.push_back(x);
	}
	x=largestRectangleArea(vec);
	cout<<x;
	return 0;
}
