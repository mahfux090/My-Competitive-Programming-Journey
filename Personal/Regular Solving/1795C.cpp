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
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(int i=0; i<n; ++i) cin>>a[i];
    for(int i=0; i<n; ++i) cin>>b[i];

    vector<ll> b_pref(n + 1, 0);
    for(int i=0; i<n; ++i) {
        b_pref[i+1] = b_pref[i] + b[i];
    }

    vector<ll> full_cnt_diff(n + 1, 0);
    vector<ll> partial_sum(n + 1, 0);

    for(int i=0; i<n; ++i) {
        ll target = a[i] + b_pref[i];
        
        auto it = lower_bound(all(b_pref), target);
        int k_idx = distance(b_pref.begin(), it) - 1;

        if (k_idx < n) {
            ll remaining = target - b_pref[k_idx];
            partial_sum[k_idx] += remaining;
        }
        
        if (k_idx > i) {
            full_cnt_diff[i]++;
            full_cnt_diff[k_idx]--;
        }
    }

    ll current_full_cnt = 0;
    for(int i=0; i<n; ++i) {
        current_full_cnt += full_cnt_diff[i];
        ll total_drunk = current_full_cnt * b[i] + partial_sum[i];
        cout << total_drunk << " ";
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
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//