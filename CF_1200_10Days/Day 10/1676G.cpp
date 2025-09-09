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

vector<ll> v[4005];
string s;
ll ans;

pll dfs(ll u)
{
    ll b = 0, w = 0;
    if (s[u - 1] == 'B')
        b++;
    else
        w++;
    for (ll c : v[u])
    {
        pll p = dfs(c);
        b += p.ff;
        w += p.ss;
    }
    if (b == w)
        ans++;
    return {b, w};
}

void solve()
{
    ll n;
    cin >> n;
    for (int i = 0; i <= n; i++)
        v[i].clear();
    for (ll i = 2; i <= n; i++)
    {
        ll p;
        cin >> p;
        v[p].pb(i);
    }
    cin >> s;
    ans = 0;
    dfs(1);
    cout << ans << lb;
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