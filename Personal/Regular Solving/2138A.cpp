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
    ll k,x;
    cin>>k>>x;

    vector<int> o;
    ll c = x;
    ll t=1LL<<(k+1);
    ll s = 1LL<<k;

    while(c!=s){
        ll v = t-c;
        if(c>v){
            c = c-v;
            o.pb(2);
        } else{
            c = c*2;
            o.pb(1);
        }
    }

    reverse(all(o));

    cout << sz(o) << lb;
    for(int i=0; i < sz(o); ++i){
        cout<<o[i]<<(i == sz(o)-1 ? "" : " ");
    }
    cout<<lb;
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