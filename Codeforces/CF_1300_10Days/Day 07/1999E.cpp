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

int d(int k){
    if(k==0) return 0;
    int c = 0;
    while(k>0){
        k/=3;
        c++;
    }
    return c;
}

ll S(int n){
    if (n==0) return 0;
    ll a=0;
    ll p=1;
    int i=1;
    while(p<=n/3){
        a +=(ll)i*(p*3-p);
        p*=3;
        i++;
    }
    a+=(ll)i*(n-p+1);
    return a;
}

void solve() {
    int l, r;
    cin>>l>>r;
    ll res=(S(r)-S(l-1))+d(l);
    cout<<res<<lb;
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