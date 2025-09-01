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

int ct(int x){
    int c=0;
    while(x>0&&x%2==0){
        c++;
        x/=2;
    }
    return c;
}

void solve() {
    int n;
    cin >> n;
    int cp = 0;
    for(int i=1; i<=n; ++i){
        int v;
        cin >> v;
        cp += ct(v);
    }
    
    vector<int> g;
    for(int i=1; i<=n; ++i) g.pb(ct(i));
    
    sort(rall(g));
    
    if(cp >= n){
        cout << 0 << lb;
        return;
    }
    
    int op=0;
    int nd=n-cp;

    for(int i=0; i<n; ++i){
        nd -= g[i];
        op++;
        if(nd <= 0){
            cout << op << lb;
            return;
        }
    }
    
    cout << -1 << lb;
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