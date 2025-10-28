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

bool check(ll D, int n, int k, ll x, vector<ll>& a) {
    vector<pll> forbidden;
    for(int i=0; i<n; i++) {
        ll start = max(0LL, a[i] - D + 1);
        ll end = min(x, a[i] + D - 1);
        if(start <= end) {
            forbidden.pb({start, end});
        }
    }
    
    sort(all(forbidden));
    
    ll forbidden_count = 0;
    if(forbidden.empty()) {
        return (x + 1) >= k;
    }
    
    ll cur_s = forbidden[0].ff;
    ll cur_e = forbidden[0].ss;
    
    for(int i=1; i < sz(forbidden); i++) {
        if(forbidden[i].ff <= cur_e + 1) {
            cur_e = max(cur_e, forbidden[i].ss);
        } else {
            forbidden_count += (cur_e - cur_s + 1);
            cur_s = forbidden[i].ff;
            cur_e = forbidden[i].ss;
        }
    }
    forbidden_count += (cur_e - cur_s + 1);
    
    ll allowed_slots = (x + 1) - forbidden_count;
    return allowed_slots >= k;
}

void solve() {
    int n, k;
    ll x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(all(a));
    
    ll low = 0, high = x, ans_D = 0;
    
    while(low <= high) {
        ll mid = low + (high - low) / 2;
        if(check(mid, n, k, x, a)) {
            ans_D = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    vector<pll> forbidden;
    for(int i=0; i<n; i++) {
        ll start = max(0LL, a[i] - ans_D + 1);
        ll end = min(x, a[i] + ans_D - 1);
        if(start <= end) {
            forbidden.pb({start, end});
        }
    }
    
    sort(all(forbidden));
    
    vector<pll> merged;
    if(!forbidden.empty()) {
        ll cur_s = forbidden[0].ff;
        ll cur_e = forbidden[0].ss;
        for(int i=1; i < sz(forbidden); i++) {
            if(forbidden[i].ff <= cur_e + 1) {
                cur_e = max(cur_e, forbidden[i].ss);
            } else {
                merged.pb({cur_s, cur_e});
                cur_s = forbidden[i].ff;
                cur_e = forbidden[i].ss;
            }
        }
        merged.pb({cur_s, cur_e});
    }

    vector<ll> ans_pos;
    ll cur_pos = 0;
    for(auto p : merged) {
        while(cur_pos < p.ff && sz(ans_pos) < k) {
            ans_pos.pb(cur_pos);
            cur_pos++;
        }
        cur_pos = p.ss + 1;
    }
    
    while(cur_pos <= x && sz(ans_pos) < k) {
        ans_pos.pb(cur_pos);
        cur_pos++;
    }
    
    for(int i=0; i<k; i++) {
        cout << ans_pos[i] << (i == k - 1 ? "" : " ");
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