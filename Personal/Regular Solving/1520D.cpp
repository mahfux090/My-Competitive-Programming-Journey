#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        map<long long, long long> mp;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long val = a[i] - i;
            ans += mp[val];
            mp[val]++;
        }
        cout << ans << "\n";
    }
}
