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

int f[200005];
int n;

void u(int i, int x) {
    for(;i<=n;i+=i&-i) f[i]+=x;
}

int q(int i) {
    int s=0;
    for(;i>0;i-=i&-i) s+=f[i];
    return s;
}

void solve() {
    cin>>n;
    vector<pair<int,int>> a(n);
    vector<int> b;
    for(int i=0; i<n; i++) {
        cin>>a[i].ff>>a[i].ss;
        b.pb(a[i].ss);
    }
    
    sort(all(b));
    sort(all(a));
    
    for(int i=0;i<=n;i++) f[i]=0;
    
    ll ans=0;
    for(int i=0; i<n; i++) {
        int pos = lower_bound(all(b), a[i].ss) - b.begin() + 1;
        ans += (i - q(pos));
        u(pos, 1);
    }
    cout<<ans<<lb;
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