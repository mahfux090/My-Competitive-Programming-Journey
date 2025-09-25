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

ll calculate_cost(vector<int>& pos) {
    if (sz(pos) <= 1) {
        return 0;
    }
    vector<ll> q;
    for (int i = 0; i < sz(pos); ++i) {
        q.pb((ll)pos[i] - i);
    }
    
    ll median_val = q[sz(q) / 2];
    ll cost = 0;
    for (ll val : q) {
        cost += abs(val - median_val);
    }
    return cost;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> pos_a, pos_b;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a') {
            pos_a.pb(i);
        } else {
            pos_b.pb(i);
        }
    }

    ll cost_a = calculate_cost(pos_a);
    ll cost_b = calculate_cost(pos_b);

    cout << min(cost_a, cost_b) << lb;
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
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//