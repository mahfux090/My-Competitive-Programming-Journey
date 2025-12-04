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
    int d, sumTime;
    cin >> d >> sumTime;
    
    vector<pii> v(d);
    int minS = 0, maxS = 0;
    
    for(int i = 0; i < d; i++) {
        cin >> v[i].ff >> v[i].ss;
        minS += v[i].ff;
        maxS += v[i].ss;
    }
    
    if (sumTime < minS || sumTime > maxS) {
        cout << "NO" << lb;
        return;
    }
    
    cout << "YES" << lb;
    int extra = sumTime - minS;
    
    for(int i = 0; i < d; i++) {
        int add = min(extra, v[i].ss - v[i].ff);
        cout << v[i].ff + add << " ";
        extra -= add;
    }
    cout << lb;
}

int main() {
    fast
    // The problem does not have multiple test cases
    // int t=1;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//