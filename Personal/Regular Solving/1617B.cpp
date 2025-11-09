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
    ll n;
    cin>>n;
    if(n%2==0){
        cout<<2<<" "<<n-3<<" "<<1<<lb;
    }
    else{
        ll k = n-1;
        ll h = k/2;
        if(h%2==0){
            cout<<h-1<<" "<<h+1<<" "<<1<<lb;
        }
        else{
            cout<<h-2<<" "<<h+2<<" "<<1<<lb;
        }
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