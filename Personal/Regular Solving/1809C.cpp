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
    int n, k;
    cin >> n >> k;

    int p = 0;
    while (p < n && (p + 1) <= k) {
        k -= (p + 1);
        p++;
    }

    vector<int> a(n);
    for (int i = 0; i < p; ++i) {
        a[i] = 2;
    }

    if (p < n) {
        if(k > 0) {
           a[p] = - (2 * (p - k) + 1);
        } else {
           a[p] = -500;
        }
    }
    
    for (int i = p + 1; i < n; ++i) {
        a[i] = -1000;
    }

    for (int i=0; i<n; ++i) {
        cout << a[i] << " ";
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
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//