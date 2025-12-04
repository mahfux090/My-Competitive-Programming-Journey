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
    ll ts=0;
    ll gm=LINF;
    ll sm=LINF;

    for(int i=0;i<n;i++){
        int m;
        cin >>m;
        ll m1 = LINF, m2=LINF;
        for(int j=0;j<m;j++){
            ll a;
            cin>>a;
            if(a<m1){
                m2=m1;
                m1=a;
            } else if(a < m2){
                m2=a;
            }
        }
        ts+=m2;
        gm=min(gm, m1);
        sm=min(sm, m2);
    }
    
    ll ans = gm+ts-sm;
    cout<<ans<<lb;
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