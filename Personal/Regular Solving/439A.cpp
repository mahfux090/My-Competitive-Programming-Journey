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
    short n;
    int d;
    cin>>n>>d;

    ll T=0;
    
    for(char i=0;i<n;i++) {
        short t;
        cin>>t;
        T+=t;
    }
    ll RT=T;
    if(n>0) RT+=(ll)(n-1)*10;
    
    if(RT>d) {
        cout<<-1<<lb;
        return;
    }
    ll MJ=0;
    if(n>0) MJ+=(ll)(n-1)*2; 
    ll REM_ADD=d-RT;
    MJ+=REM_ADD/5;
    
    cout<<MJ<<lb;

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