#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i].first >> v[i].second;
        bool ok = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i].first < v[i].second)
                ok = 0;
            if (i > 0)
            {
                if (v[i].first < v[i - 1].first)
                    ok = 0;
                if (v[i].second < v[i - 1].second)
                    ok = 0;
                if (v[i].first - v[i - 1].first < v[i].second - v[i - 1].second)
                    ok = 0;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}
