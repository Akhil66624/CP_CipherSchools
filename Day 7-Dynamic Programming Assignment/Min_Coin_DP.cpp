#include <bits/stdc++.h>
using namespace std;
int minCoins(vector<int> & coins, int N) 
{
    if (N == 0)
    {
        return 0;
    }
    int M = coins.size();
    vector<int> dp(N + 1, INT_MAX);
    dp[0] = 0;

    for (int n = 1; n <= N; n++) 
    {
        for (int i = 0; i < M; i++)
        {
            if (coins[i] <= n ) 
            {
                if (dp[n - coins[i]] == INT_MAX)
                {
                    continue;
                }
                dp[n] = min(dp[n], 1 + dp[n - coins[i]]);
            }
        }
    }

    if (dp[N] == INT_MAX)
    {
        return -1;
    }
    else
    {
        return dp[N];	
    } 
        
    
}
int main() 
{
  return 0;
}
