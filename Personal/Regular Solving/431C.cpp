#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) (int)(x).size()
#define endl '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve()
{
    int n, k, d;
    cin >> n >> k >> d;
    vector<ll> total(n + 1, 0);
    total[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i >= j) {
                total[i] = (total[i] + total[i - j]) % MOD;
            }
        }
    }
    vector<ll> bad(n + 1, 0);
    bad[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < d; j++) {
            if (i >= j) {
                bad[i] = (bad[i] + bad[i-j])%MOD;
            }
        }
    }
    ll ans = (total[n] - bad[n] + MOD) % MOD;
    cout << ans << endl;
}
int main()
{
    fast
    int t=1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          Mahfuz Uddin                    //
//------------------------------------------//