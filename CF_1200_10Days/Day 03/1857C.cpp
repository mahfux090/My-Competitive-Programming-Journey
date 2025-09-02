#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);
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
    int m = n * (n - 1) / 2;
    vector<int> b(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }
    sort(all(b));

    vector<int> a;
    int current_idx = 0;
    for (int k = n - 1; k >= 1; --k)
    {
        if (current_idx < m)
        {
            a.pb(b[current_idx]);
            current_idx += k;
        }
    }
    a.pb(b[m - 1]);

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << lb;
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