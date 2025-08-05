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
    int v;
    cin>>v;
    int a[10];
    int mc = INF;
    for(int i=1; i<10; i++){
        cin>>a[i];
        mc=min(mc, a[i]);
    }

    if(v<mc){
        cout << -1 << lb;
        return;
    }

    int l=v/mc;
    string res="";
    
    for(int i=0; i<l; ++i){
        for(int d=9;d>=1;--d){
            if (v >= a[d] && (ll)(v - a[d]) >= (ll)(l-1-i) * mc) {
                res += (d + '0');
                v-= a[d];
                break;
            }
        }
    }
    cout << res << lb;
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
//          Mahfuz Uddin                  //
//------------------------------------------//