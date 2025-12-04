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
    int n, q;
    cin >> n >> q;
    string a,b;
    cin>>a>>b;

    vector<vector<int>> pa(n+1, vector<int>(26,0));
    vector<vector<int>> pb(n+1, vector<int>(26,0));

    for(int i=0;i<n;++i) {
        for(int j=0; j<26; ++j) {
            pa[i+1][j]=pa[i][j];
            pb[i+1][j]=pb[i][j];
        }
        pa[i+1][a[i]-'a']++;
        pb[i+1][b[i]-'a']++;
    }

    while(q--) {
        int l, r;
        cin>>l>>r;
        int ops = 0;
        for(int i=0; i<26; ++i) {
            int ca=pa[r][i]-pa[l-1][i];
            int cb=pb[r][i]-pb[l-1][i];
            if(ca>cb) {
                ops+=ca-cb;
            }
        }
        cout<<ops<<lb;
    }
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