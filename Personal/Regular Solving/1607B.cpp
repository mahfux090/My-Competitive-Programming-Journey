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
    ll x,n;
    cin>>x>>n;
    if(n==0){
        cout<<x<<lb;
        return;
    }
    
    ll r = n%4;
    
    if(abs(x)%2==0){
        if(r==0) cout<<x<<lb;
        else if(r==1) cout<<x-n<<lb;
        else if(r==2) cout<<x+1<<lb;
        else cout<<x+n+1<<lb;
    }else{
        if(r==0) cout<<x<<lb;
        else if(r==1) cout<<x+n<<lb;
        else if(r==2) cout<<x-1<<lb;
        else cout<<x-n-1<<lb;
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