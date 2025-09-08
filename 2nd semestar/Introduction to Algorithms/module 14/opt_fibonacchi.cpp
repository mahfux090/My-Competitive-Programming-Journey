#include <bits/stdc++.h>
using namespace std;
int dp[100];
int fibo(int n)
{
    if (n < 2)
        return n;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = fibo(n - 1) + fibo(n - 2);
    return dp[n];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cout << fibo(5);
    return 0;
}