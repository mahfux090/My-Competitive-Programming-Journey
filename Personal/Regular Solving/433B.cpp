#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<long long> pre1(n + 1), pre2(n + 1);
    for (int i = 1; i <= n; i++)
        pre1[i] = pre1[i - 1] + v[i - 1];
    vector<long long> u = v;
    sort(u.begin(), u.end());
    for (int i = 1; i <= n; i++)
        pre2[i] = pre2[i - 1] + u[i - 1];
    int m;
    cin >> m;
    while (m--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1)
            cout << pre1[r] - pre1[l - 1] << "\n";
        else
            cout << pre2[r] - pre2[l - 1] << "\n";
    }
}
