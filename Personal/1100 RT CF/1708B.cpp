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
#define lb '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> ans;

    for(ll i = 1; i <= n; i++) {
        // Find the smallest multiple of i that is >= l
        ll multiple = ((l + i - 1) / i) * i;
        
        if(multiple > r) {
            cout << "NO" << lb;
            return;
        }
        ans.pb(multiple);
    }

    cout << "YES" << lb;
    for(int i = 0; i < n; i++) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << lb;
}

int main() {
    fast
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}