// Author: Mahfuz Uddin
// Problem: B. Line Segments
// URL: https://codeforces.com/contest/2119/problem/B
// Date: 2025-07-25 12:00
// Language: C++
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long px, py, qx, qy;
    cin >> px >> py >> qx >> qy;
    vector<long long> a(n);
    long long S = 0;
    long long M = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        S += a[i];
        if (a[i] > M)
        {
            M = a[i];
        }
    }

    long long dx = px - qx;
    long long dy = py - qy;
    long long dis_sq = dx * dx + dy * dy;

    long long min_reach_dist = max(0LL, 2 * M - S);
    long long max_reach_dist = S;

    if (min_reach_dist * min_reach_dist <= dis_sq && dis_sq <= max_reach_dist * max_reach_dist)
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

