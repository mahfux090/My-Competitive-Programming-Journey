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
    vector<ll>a(n);
    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }

    vector<ll> psr(n, 0);
    for(int i=1; i<n; i++) {
        ll cost;
        if(i == 1) {
            cost = 1;
        } else {
            if(a[i] - a[i-1] < a[i-1] - a[i-2]) {
                cost = 1;
            } else {
                cost = a[i] - a[i-1];
            }
        }
        psr[i] = psr[i-1] + cost;
    }

    vector<ll> psl(n, 0);
    for(int i=n-2; i>=0; --i) {
        ll cost;
        if(i == n-2) {
            cost = 1;
        } else {
            if(a[i+1] - a[i] < a[i+2] - a[i+1]) {
                cost = 1;
            } else {
                cost = a[i+1] - a[i];
            }
        }
        psl[i] = psl[i+1] + cost;
    }

    int m;
    cin>>m;
    while(m--) {
        int x, y;
        cin>>x>>y;
        --x; --y;
        if(x < y) {
            cout << psr[y] - psr[x] << lb;
        } else {
            cout << psl[y] - psl[x] << lb;
        }
    }
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

