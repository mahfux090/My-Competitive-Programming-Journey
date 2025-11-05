#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0);
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
const int INF=1e9;
const ll LINF=1e18;
const int MOD=1e9+7;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>p;
    int c;
    if(x==0){
        for(c=1;c<n;c++){
            p.pb(c);
        }
        p.pb(0);
    }
    else if(x==n){
        for(c=0;c<n;c++){
            p.pb(c);
        }
    }
    else{
        for(c=0;c<x;c++)p.pb(c);
        for(c=x+1;c<n;c++){
            p.pb(c);
        }
        p.pb(x);
    }
    for(c=0;c<n;c++){
        cout<<p[c]<<(c==n-1?"":" ");
    }
    cout<<lb;
}

int main(){
    fast
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//