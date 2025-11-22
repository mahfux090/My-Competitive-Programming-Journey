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
    ll c;
    cin>>n>>c;
    vector<ll> s(n);
    for(int i=0;i<n;i++) cin >> s[i];
    ll l=1, r=1e9;
    while(l<=r){
        ll m=l+(r-l)/2;
        ll tot=0;
        for(int i=0; i<n; i++){
            ll side = s[i]+2*m;
            ll area = side*side;
            if(c-tot < area){
                tot = c + 1;
                break;
            }
            tot += area;
        }
        if(tot==c){
            cout << m << lb;
            return;
        }
        if(tot > c) r=m-1;
        else l=m+1;
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