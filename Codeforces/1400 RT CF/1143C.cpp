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
    vector<int> p(n+1), c(n+1);
    vector<bool> ok(n+1, false);

    for(int i=1; i<=n; i++) {
        cin >> p[i] >> c[i];
        if(p[i] != -1) {
            if(c[i]==0) ok[p[i]]=true;
        }
    }

    bool f=false;
    for(int i=1;i<=n;i++){
        if(c[i]==1 && !ok[i]){
            cout<<i<<" ";
            f = true;
        }
    }
    
    if(!f) cout << -1;
    cout<<lb;
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