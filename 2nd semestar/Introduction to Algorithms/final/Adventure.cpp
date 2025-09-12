#include <bits/stdc++.h>
using namespace std;
int weight[1005], value[1005];
int dp[1005][1005];
int knapsack(int n, int w)
{
    if (n == 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
    {
        return dp[n][w];
    }
    if (weight[n - 1] <= w)
    {
        int op1 = knapsack(n - 1, w - weight[n - 1]) + value[n - 1];
        int op2 = knapsack(n - 1, w);
        return dp[n][w] = max(op1, op2);
    }
    else
    {
        int op2 = knapsack(n - 1, w);
        return dp[n][w] = op2;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> value[i];
        }
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= w; j++)
                dp[i][j] = -1;
            
        cout << knapsack(n, w) << endl;
    }
    return 0;
}