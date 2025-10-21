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
    int p[3][3];
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            cin>>p[i][j];
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; ++j){
            int t = p[i][j];
            if(i>0) t+=p[i-1][j];
            if(i<2) t+=p[i+1][j];
            if(j>0) t+=p[i][j-1];
            if(j<2) t+=p[i][j+1];
            
            cout<<(1^(t%2));
        }
        cout<<lb;
    }
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