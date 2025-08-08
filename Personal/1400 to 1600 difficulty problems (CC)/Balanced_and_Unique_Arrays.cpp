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
    if(n%4 != 0){
        cout<<"NO"<<lb;
        return;
    }
    cout<<"YES"<<lb;
    vector<int> a, b;
    int k=n/4;
    for(int i=1;i<=k;++i){
        a.pb(i);
    }
    for(int i=n-k+1;i<=n;++i){
        a.pb(i);
    }
    for(int i=k+1;i<=n-k;++i){
        b.pb(i);
    }
    for(int i=0;i<sz(a);++i){
        cout<<a[i]<<(i==sz(a)-1?"":" ");
    }
    cout<<lb;
    for(int i=0;i<sz(b);++i){
        cout<<b[i]<<(i==sz(b)-1?"":" ");
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