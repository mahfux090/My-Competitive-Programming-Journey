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
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; ++i) cin>>a[i];

    sort(all(a));

    ll min_cost = -1;

    for(ll c=1; ; ++c) {
        ll cur_cost=0;
        ll p_of_c = 1;
        bool possible = true;
        
        for(int i=0; i<n; ++i) {
            cur_cost += abs(a[i] - p_of_c);
            
            if(min_cost != -1 && cur_cost > min_cost) {
                possible = false;
                break;
            }
            
            if(i < n-1) {
                if ( (LINF / c) < p_of_c ) {
                    possible = false;
                    break;
                }
                p_of_c *= c;
            }
        }

        if(!possible && c > 1) { 
             break;
        }

        if(min_cost == -1 || cur_cost < min_cost) {
            min_cost = cur_cost;
        }
    }

    cout << min_cost << lb;
}

int main() {
    fast
    int t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//