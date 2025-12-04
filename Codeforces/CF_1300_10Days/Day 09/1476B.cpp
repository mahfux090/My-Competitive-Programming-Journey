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
    ll k;
    cin >> n >> k;
    vector<ll> p(n);
    for(int i=0; i<n; ++i){
        cin>>p[i];
    }

    ll inc = 0;
    ll s = p[0];

    for(int i=1; i<n; i++){
        if(100LL * p[i] > k * s){
            ll need = (100LL * p[i] + k - 1) / k;
            ll add = need - s;
            inc += add;
            s += add;
        }
        s += p[i];
    }

    cout << inc << lb;
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