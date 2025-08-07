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
    
    if (n < 2) {
        for (int i = 0; i < n; i++) {
            ll g;
            cin >> g;
        }
        cout << "UNFIT" << lb;
        return;
    }
    
    ll min_goal;
    cin >> min_goal;
    
    ll max_diff = 0;
    
    for (int i = 1; i < n; i++) {
        ll current_goal;
        cin >> current_goal;
        
        ll diff = current_goal - min_goal;
        if (diff > max_diff) {
            max_diff = diff;
        }
        
        if (current_goal < min_goal) {
            min_goal = current_goal;
        }
    }
    
    if (max_diff > 0) {
        cout << max_diff << lb;
    } else {
        cout << "UNFIT" << lb;
    }
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