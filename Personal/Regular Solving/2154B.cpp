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
    int n;
    cin>>n;
    vector<ll> a(n);
    set<ll> s;
    s.insert(1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    vector<ll> v(all(s));
    int m=sz(v);
    map<ll,int> mp;
    for(int i=0;i<m;i++)mp[v[i]]=i;

    vector<vector<vector<ll>>> dp(n, vector<vector<ll>>(m, vector<ll>(m, LINF)));

    for(int i=0;i<m;i++){
        if(v[i]<=a[0]){
            dp[0][i][i]=a[0]-v[i];
        }
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            ll val = v[j];
            for(int k=0;k<m;k++){
                ll p_max = v[k];
                ll cost_to_set;
                if(val <= p_max){
                    cost_to_set = max(0LL, a[i]-val);
                } else {
                    if(val <= a[i])cost_to_set = a[i]-val;
                    else cost_to_set = LINF;
                }
                if(cost_to_set == LINF) continue;

                ll min_prev = LINF;
                if(i%2==1){ // i is odd (index), b[i] < b[i-1]
                    for(int prev_j=j+1;prev_j<m;prev_j++){
                        min_prev = min(min_prev, dp[i-1][prev_j][k]);
                    }
                } else { // i is even (index), b[i] > b[i-1]
                    for(int prev_j=0;prev_j<j;prev_j++){
                        min_prev = min(min_prev, dp[i-1][prev_j][k]);
                    }
                }

                if(min_prev != LINF){
                    int new_p_max_idx = (val > p_max) ? j : k;
                    dp[i][j][new_p_max_idx] = min(dp[i][j][new_p_max_idx], min_prev + cost_to_set);
                }
            }
        }
        
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < m; ++k) {
                if (k > 0) dp[i][j][k] = min(dp[i][j][k], dp[i][j][k - 1]);
            }
        }
    }

    ll ans = LINF;
    for(int j=0;j<m;j++){
        for(int k=0;k<m;k++){
            ans = min(ans, dp[n-1][j][k]);
        }
    }
    cout << ans << lb;
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