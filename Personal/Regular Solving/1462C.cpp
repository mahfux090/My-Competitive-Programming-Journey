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
    int x;
    cin>>x;
    if(x > 45){
        cout << -1 << lb;
        return;
    }
    
    vector<int> v;
    for(int d=9; d>=1; d--){
        if(x >= d){
            v.pb(d);
            x -= d;
        }
        if(x == 0) break;
    }
    
    sort(all(v));
    
    for(int d : v){
        cout << d;
    }
    cout << lb;
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