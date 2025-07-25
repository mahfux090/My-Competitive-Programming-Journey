#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    long long den = (long long)n * n - 1;
    long long y_num = (long long)n * a[0] - a[n - 1];
    long long x_num = (long long)n * a[n - 1] - a[0];

    if (x_num < 0 || y_num < 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (x_num % den != 0 || y_num % den != 0)
    {
        cout << "NO" << endl;
        return;
    }

    long long x = x_num / den;
    long long y = y_num / den;

    for (int i = 0; i < n; ++i)
    {
        long long expected_val = x * (i + 1) + y * (n - i);
        if (a[i] != expected_val)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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