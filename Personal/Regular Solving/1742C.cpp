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
    char g[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>g[i][j];
        }
    }
    
    char a='B';
    for(int i=0; i<8; i++){
        int c=0;
        for(int j=0; j<8; j++){
            if(g[i][j]=='R') c++;
        }
        if(c==8){
            a='R';
            break;
        }
    }
    cout<<a<<lb;
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