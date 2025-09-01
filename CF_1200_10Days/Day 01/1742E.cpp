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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> mx(n);
    vector<ll> sm(n);

    mx[0] = a[0];
    sm[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        mx[i] = max(mx[i - 1], a[i]);
        sm[i] = sm[i - 1] + a[i];
    }

    for (int i = 0; i < q; i++)
    {
        int k;
        cin >> k;

        int idx = upper_bound(all(mx), k) - mx.begin();

        if (idx == 0)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << sm[idx - 1] << " ";
        }
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