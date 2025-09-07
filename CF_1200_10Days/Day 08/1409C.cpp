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
    int n,x,y;
    cin>>n>>x>>y;
    int diff = y-x;
    int d = -1;
    for(int j=n-1; j>=1; j--) {
        if(diff%j==0) {
            d = diff/j;
            break;
        }
    }
    vector<int> v;
    for(int c=x; c<=y; c+=d) {
        v.pb(c);
    }
    int c=x-d;
    while(sz(v)<n && c>0){
        v.pb(c);
        c-=d;
    }
    c=y+d;
    while(sz(v)<n){
        v.pb(c);
        c+=d;
    }
    for(int i=0; i<n; i++){
        cout << v[i] << (i==n-1 ? "" : " ");
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