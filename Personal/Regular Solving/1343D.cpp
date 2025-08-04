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
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }
    
    vector<int> d(2*k + 2, 0);
    vector<int> f(2*k + 1, 0);

    for (int i = 0; i<n/2; ++i) {
        int u = a[i];
        int v = a[n-1-i];
        f[u+v]++;
        int l = min(u,v)+1;
        int r = max(u,v)+k;
        d[l]++;
        d[r+1]--;
    }

    vector<int> c(2*k + 2, 0);
    for(int i = 1; i<=2*k+1; ++i) {
        c[i] = c[i-1] + d[i];
    }

    int ans = n;
    for (int x = 2; x <= 2*k; ++x) {
        int cost = (c[x] - f[x]) + (n/2 - c[x]) * 2;
        ans = min(ans, cost);
    }
    cout << ans << endl;
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
//          Mahfuz Uddin                    //
//------------------------------------------//