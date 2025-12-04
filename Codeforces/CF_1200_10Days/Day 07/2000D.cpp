#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int a[n + 1], h[n + 1];
        h[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            h[i] = a[i] + h[i - 1];
        }

        string s;
        cin >> s;

        int res = 0, p = 0, q = n - 1;

        while (p < q)
        {

            while (p < q && s[p] == 'R')
                p++;

            while (p < q && s[q] == 'L')
                q--;

            if (p < q)
                res += h[q + 1] - h[p];

            p++, q--;
        }

        cout << res << '\n';
    }
}