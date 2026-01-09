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
    ll n, m, k;
    cin>>n>>m>>k;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    auto cal = [&](vector<int>& v, int sz) {
        vector<ll> cnt(sz + 2, 0);
        int c = 0;
        for(int x : v) {
            if(x) c++;
            else {
                if(c) cnt[c]++;
                c=0;
            }
        }
        if(c) cnt[c]++;
        
        vector<ll> sn(sz + 2, 0), ss(sz + 2, 0);
        for(int i=sz; i>=1; i--) {
            sn[i] = sn[i+1] + cnt[i];
            ss[i] = ss[i+1] + cnt[i] * i;
        }
        
        vector<ll> res(sz + 1, 0);
        for(int i=1; i<=sz; i++) {
            res[i] = ss[i] - sn[i] * (i - 1);
        }
        return res;
    };

    vector<ll> A = cal(a, n);
    vector<ll> B = cal(b, m);
    
    ll ans = 0;
    for(ll i=1; i*i<=k; i++) {
        if(k%i == 0) {
            ll d1 = i;
            ll d2 = k/i;
            
            if(d1<=n && d2<=m) ans += A[d1]*B[d2];
            if(d1!=d2) {
                if(d2<=n && d1<=m) ans += A[d2]*B[d1];
            }
        }
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