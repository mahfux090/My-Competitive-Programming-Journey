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
    string s;
    cin>>s;
    ll n = sz(s);
    string ss = s+s;
    ll k=0, mx=0;
    for(char c:ss){
        if(c=='1') k++;
        else{
            mx=max(mx,k);
            k=0;
        }
    }
    mx=max(mx, k);
    if(mx > n) mx = n;

    if(mx == n){
        cout<< n*n <<lb;
    } else {
        ll a = (mx+1)/2;
        ll b = (mx+1)-a;
        cout<< a*b <<lb;
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