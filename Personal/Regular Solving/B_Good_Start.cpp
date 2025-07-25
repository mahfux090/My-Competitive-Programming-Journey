// Author: Mahfuz Uddin
// Problem: B. Good Start
// URL: https://codeforces.com/contest/2113/problem/B
// Date: 2025-07-25 11:56
// Language: C++

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long w, h, a, b;
    cin >> w >> h >> a >> b;
    long long x, y, u, v;
    cin >> x >> y >> u >> v;

    long long dx = x - u;
    long long dy = y - v;

    if ((dx != 0 && dx % a == 0) || (dy != 0 && dy % b == 0))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
