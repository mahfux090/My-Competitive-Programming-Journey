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
    cin >> n;
    vector<string> s(n);
    for(int i=0; i<n; ++i) {
        cin>>s[i];
    }
    bool f=true;
    for (int i = 0; i < n - 1; ++i) {
        for(int j=0;j<n-1;++j){
            if(s[i][j]=='1'){
                if(s[i+1][j]=='0'&&s[i][j+1]=='0'){
                    f=false;
                    break;
                }
            }
        }
        if(!f) break;
    }
    if(f) cout<<"YES"<<lb;
    else cout<<"NO"<<lb;
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