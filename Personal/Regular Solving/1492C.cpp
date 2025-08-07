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
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    vector<int> l(m), r(m);
    int k=0;
    for(int i=0;i<m;i++){
        while(k<n&&s[k]!=t[i]){
            k++;
        }
        l[i]=k;
        k++;
    }
    k=n-1;
    for(int i=m-1;i>=0;i--){
        while(k>=0&&s[k]!=t[i]){
            k--;
        }
        r[i]=k;
        k--;
    }
    int ans=0;
    for(int i=0;i<m-1;i++){
        ans=max(ans,r[i+1]-l[i]);
    }
    cout<<ans<<lb;
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