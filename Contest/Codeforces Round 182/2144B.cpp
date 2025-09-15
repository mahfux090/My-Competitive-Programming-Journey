#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)(x).size()
#define lb '\n'
#define pii pair<int, int>
#define pll pair<ll, ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    vector<bool> used(n + 1, false);
    vector<int> z;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        if (p[i] != 0)
            used[p[i]] = true;
        else
            z.pb(i);
    }
    vector<int> m;
    for (int i = 1; i <= n; i++)
        if (!used[i])
            m.pb(i);
    if (sz(z) > 1)
    {
        for (size_t i = 0; i < sz(z); ++i)
        {
            if (z[i] + 1 == m[i])
            {
                if (i == 0)
                    swap(m[i], m[sz(z) - 1]);
                else
                    swap(m[i], m[i - 1]);
            }
        }
    }
    for (size_t i = 0; i < sz(z); i++)
        p[z[i]] = m[i];
    int l = 0;
    while (l < n && p[l] == l + 1)
        l++;
    if (l == n)
    {
        cout << 0 << lb;
        return;
    }
    int r = n - 1;
    while (r >= 0 && p[r] == r + 1)
        r--;
    vector<int> sub_p, sub_sorted;
    for (int i = l; i <= r; i++)
    {
        sub_p.pb(p[i]);
        sub_sorted.pb(i + 1);
    }
    sort(all(sub_sorted));
    if (sub_p == sub_sorted)
        cout << 1 << lb;
    else
        cout << r - l + 1 << lb;
}

int main()
{
    fast int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//