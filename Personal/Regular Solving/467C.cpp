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
#define endl '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<ll> p(n + 1, 0);
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    
    vector<ll> pref(n+1, 0);
    for(int i=1;i<=n;i++){
        pref[i]=pref[i-1]+p[i];
    }
    
    vector<ll> s(n+1, 0);
    for(int i=m;i<=n;i++){
        s[i] = pref[i] - pref[i-m];
    }

    vector<vector<ll>> dp(k+1, vector<ll>(n+1, 0));
    
    for(int j=1;j<=k;j++){
        for(int i=j*m; i<=n; i++){
            ll op1 = dp[j][i-1];
            ll op2 = dp[j-1][i-m] + s[i];
            dp[j][i] = max(op1,op2);
        }
    }
    
    cout<<dp[k][n]<<endl;
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
//          Mahfuz Uddin                    //
//------------------------------------------//