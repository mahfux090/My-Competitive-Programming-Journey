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

ll get_max_p(map<ll, int> c) {
    int total_sticks = 0;
    ll current_p = 0;
    for(auto const& [len, num] : c) {
        if(num > 0){
            total_sticks += num;
            current_p += len * num;
        }
    }
    
    if(total_sticks < 3) return 0;

    vector<ll> odds;
    for(auto const& [len, num] : c) {
        if(num > 0 && num % 2 != 0) {
            odds.pb(len);
        }
    }
    sort(all(odds));

    if(sz(odds) > 2) {
        for(int i = 0; i < sz(odds) - 2; ++i) {
            c[odds[i]]--;
            current_p -= odds[i];
        }
    }
    
    total_sticks=0;
    for(auto const& [len, num] : c) if(num>0) total_sticks+=num;
    if(total_sticks < 3) return 0;

    ll s_max = 0;
    for(auto it = c.rbegin(); it != c.rend(); ++it) {
        if(it->ss > 0) {
            s_max = it->ff;
            break;
        }
    }
    
    if(2 * s_max < current_p) {
        return current_p;
    }
    
    return 0;
}

void solve() {
    int n;
    cin >> n;
    map<ll, int> c;
    ll s_max_initial = 0;
    for (int i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        c[a]++;
        s_max_initial = max(s_max_initial, a);
    }

    ll ans1 = get_max_p(c);

    c[s_max_initial]--;
    ll ans2 = get_max_p(c);
    
    cout << max(ans1, ans2) << lb;
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