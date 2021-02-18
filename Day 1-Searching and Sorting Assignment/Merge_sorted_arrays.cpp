#include <bits/stdc++.h>
using namespace std;
vector<int> mergeSortedArrays(const vector<int>& first, const vector<int>& second)
{
    int i = 0, j = 0, k = 0;
    vector<int> result(first.size() + second.size());

    while (i < first.size() && j < second.size())
    {
        if (first[i] <= second[j])
        {
            result[k] = first[i];
            i++;
        }
        else
        {
            result[k] = second[j];
            j++;
        }
        k++;
    }

    while (i < first.size())
    {
        result[k] = first[i];
        i++;
        k++;
    }

    while (j < second.size())
    {
        result[k] = second[j];
        j++;
        k++;
    }

    return result;
}

int main()
{
    vector<int> first;
    vector<int> second;
    int m,n,i=0,x;
    cout<<"Enter 1st array size :";
    cin>>m;
    cout<<"Enter 1st array elements :";
    for(i=0;i<m;i++)
    {
    	cin>>x;
    	first.push_back(x);
	}
	cout<<"Enter 2nd array size :";
    cin>>n;
    cout<<"Enter 2nd array elements :";
    for(i=0;i<n;i++)
    {
    	cin>>x;
    	second.push_back(x);
	}
    vector<int> result = mergeSortedArrays(first, second);
    for (int i = 0; i < result.size(); i++) 
	{
        cout << result[i] << " "; 
    }
    return 0;
}
