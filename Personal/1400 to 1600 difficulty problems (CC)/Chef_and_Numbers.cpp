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

ll s(ll n){
    ll sm = 0;
    while(n>0){
        sm+=n%10;
        n/=10;
    }
    return sm;
}

void solve()
{
    ll n;
    cin>>n;
    int c=0;
    for(ll x=max(1LL,n-200);x<n;x++){
        if(x+s(x)+s(s(x))==n){
            c++;
        }
    }
    cout<<c<<lb;
}

int main()
{
    fast
    // int t=1;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//