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
#ifdef LOCAL
#include "debug.h"
#else
#define dbg(x...)
#endif

void solve() {
    int n,m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    ll r = 0;
    int j = 0;

    for(int i=0; i<n; i++) {
        while (j < m - 1 && abs(a[i] - b[j]) >= abs(a[i] - b[j+1])) {
            j++;
        }
        ll d = abs(a[i] - b[j]);
        r = max(r, d);
    }
    cout << r << endl;
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
//        Solved By Mahfuz Uddin            //
//------------------------------------------//