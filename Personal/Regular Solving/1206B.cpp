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
    ll c = 0;
    int ng = 0;
    int zr = 0;

    for(int i=0; i<n; ++i) {
        ll a;
        cin>>a;
        if(a > 0) {
            c+=(a-1);
        } else if(a < 0) {
            c+=(-a-1);
            ng++;
        } else {
            c+=1;
            zr++;
        }
    }

    if(ng % 2 != 0) {
        if(zr == 0) {
            c += 2;
        }
    }
    
    cout << c << lb;
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