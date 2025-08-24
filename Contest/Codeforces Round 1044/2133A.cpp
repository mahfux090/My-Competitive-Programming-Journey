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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        bool ok = false;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
                ok = true;
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}
