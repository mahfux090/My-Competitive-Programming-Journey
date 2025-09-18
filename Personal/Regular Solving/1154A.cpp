#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define sz(x) (int)(x).size()
#define lb '\n'

void solve(){
    ll x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    vector<ll> v={x1,x2,x3,x4};
    sort(all(v));
    cout<<v[3]-v[0]<<" "<<v[3]-v[1]<<" "<<v[3]-v[2]<<lb;
}

int main(){
    fast
    solve();
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//
