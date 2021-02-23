#include <bits/stdc++.h>
using namespace std;

int LongestSumIncreasingSubsequence(vector<int> &vec)
{
    vector<int> lis(vec.size(), 1);
    int maxLis = 1;
    for (int i = 1; i < vec.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (vec[j] < vec[i])
            {
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
        maxLis = max(maxLis, lis[i]);
    }

    return maxLis;
}

int main()
{
    vector<int> vec = {12, 32, 90, 53, 21, 46, 41,19,98,76,19,28,45, 70};
    cout << LongestSumIncreasingSubsequence(vec);
    return 0;
}
