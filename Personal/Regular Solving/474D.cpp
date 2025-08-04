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
#define endl '\n'
#define pii pair<int, int>
#define pll pair<ll, ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

const int MAX = 100005;
ll d[MAX];
ll p[MAX];

void solve()
{
    int a, b;
    cin >> a >> b;
    ll ans = (p[b] - p[a - 1] + MOD) % MOD;
    cout << ans << endl;
}

int main()
{
    fast int t, k;
    cin >> t >> k;
    for (int i = 0; i < k; i++)
    {
        d[i] = 1;
    }
    for (int i = k; i < MAX; i++)
    {
        d[i] = (d[i - 1] + d[i - k]) % MOD;
    }
    p[0] = 0;
    for (int i = 1; i < MAX; i++)
    {
        p[i] = (p[i - 1] + d[i]) % MOD;
    }
    while (t--)
    {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          Mahfuz Uddin                    //
//------------------------------------------//