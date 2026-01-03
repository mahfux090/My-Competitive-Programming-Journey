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
    vector<ll> w(n);
    for(int i=0;i<n;i++) cin >> w[i];
    vector<int> d(n, 0);
    for(int i=0; i<n-1; i++){
        int u,v;
        cin>>u>>v;
        d[u-1]++; d[v-1]++;
    }
    ll s = 0;
    vector<ll> x;
    for(int i=0; i<n; i++) {
        s+=w[i];
        for(int j=0;j<d[i]-1;j++) x.pb(w[i]);
    }
    sort(rall(x));
    cout << s;
    for(int i=0;i<sz(x);i++){
        s+=x[i];
        cout<<" "<<s;
    }
    cout<<lb;
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