#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a)
            cin >> x;
        sort(a.begin(), a.end());
        long long ans = 0;
        if (n % 2 == 0)
        {
            for (int i = 1; i < n; i += 2)
                ans += a[i];
        }
        else
        {
            ans += a[0];
            for (int i = 2; i < n; i += 2)
                ans += a[i];
        }
        cout << ans <<endl;
    }
    return 0;
}
