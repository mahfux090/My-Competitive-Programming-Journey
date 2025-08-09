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
    ll a, b, c;
    cin >> a >> b >> c;
    ll x = 0;
    bool ab=false, bc=false;
    for (int i=29; i>=0; --i) {
        if (ab&&bc) break;
        ll ba=(a>>i)&1;
        ll bb=(b>>i)&1;
        ll bc_bit=(c>>i)&1;
        if(!ab && !bc){
            ll pa0=ba,pb0=bb,pc0=bc_bit;
            if(pa0<=pb0 && pb0<=pc0){
                if(pa0<pb0) ab=true;
                if(pb0<pc0) bc=true;
            } else{
                ll pa1=ba^1,pb1=bb^1,pc1=bc_bit^1;
                if(pa1<=pb1 && pb1<=pc1){
                    x|=(1LL<<i);
                    if(pa1<pb1) ab=true;
                    if(pb1<pc1) bc=true;
                } else{
                    x = -1;
                    break;
                }
            }
        }else if(ab && !bc){
            ll pb0=bb, pc0=bc_bit;
            if(pb0<=pc0){
                if(pb0<pc0) bc=true;
            }else{
                x|=(1LL<<i);
                bc=true;
            }
        }else if(!ab && bc){
            ll pa0=ba, pb0=bb;
            if(pa0<=pb0){
                if(pa0<pb0) ab=true;
            }else{
                x|=(1LL<<i);
                ab=true;
            }
        }
    }
    cout << x << lb;
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