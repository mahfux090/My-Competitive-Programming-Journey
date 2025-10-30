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
    int n; cin>>n;
    int g[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> g[i][j];
        }
    }
 
    int p[2*n + 1];
    bool u[2*n + 1];
    for(int i=1; i<=2*n; i++) u[i] = false;
 
    for(int j=0; j<n; j++){
        int k = 2 + j;
        p[k] = g[0][j];
        u[p[k]] = true;
    }
 
    for(int i=1; i<n; i++){
        int k = (i+1) + n;
        p[k] = g[i][n-1];
        u[p[k]] = true;
    }
 
    for(int x=1; x<=2*n; x++){
        if(!u[x]){
            p[1] = x;
            break;
        }
    }
 
    for(int i=1; i<=2*n; i++){
        cout << p[i] << " ";
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