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
    vector<ll> a(n), b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    vector<ll> p(n+1, 0);
    for(int i=0; i<n; i++) p[i+1] = p[i] + b[i];

    vector<ll> cnt(n+2, 0);
    vector<ll> rem(n+2, 0);

    for(int i=0; i<n; i++) {
        ll val = a[i] + p[i];
        int idx = upper_bound(all(p), val) - p.begin() - 1;

        if(idx > i) {
            cnt[i+1]++;
            cnt[idx+1]--;
        }
        
        ll extra = a[i] - (p[idx] - p[i]);
        if(idx < n) {
            rem[idx+1] += extra;
        }
    }

    for(int i=1; i<=n; i++) cnt[i] += cnt[i-1];

    for(int i=1; i<=n; i++) {
        ll ans = cnt[i] * b[i-1] + rem[i];
        cout << ans << " ";
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