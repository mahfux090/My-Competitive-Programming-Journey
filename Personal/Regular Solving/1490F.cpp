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
    map<int,int>cnt;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cnt[x]++;
    }

    map<int,int>fcnt;
    for(auto p:cnt){
        fcnt[p.ss]++;
    }

    vector<pii>v;
    for(auto p:fcnt) v.pb(p);

    int m=sz(v);
    vector<int>s(m+1,0);
    for(int i=m-1;i>=0;i--){
        s[i]=s[i+1]+v[i].ss;
    }

    ll mk=0;
    for(int i=0; i<m; i++){
        ll c=v[i].ff;
        ll num=s[i];
        mk=max(mk, c*num);
    }
    cout<<n-mk<<lb;
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