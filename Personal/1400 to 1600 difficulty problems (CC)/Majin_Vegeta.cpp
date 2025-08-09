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
const int MAX = 1000001;

int dpf[MAX];
ll ps[MAX];

void precompute() {
    for (int i=2; i<MAX; i++) {
        if (dpf[i]==0) {
            for (ll j=(ll)i; j<MAX; j+=i) {
                dpf[j]++;
            }
        }
    }
    for (int i=1; i<MAX; i++) {
        ps[i] = ps[i-1] + dpf[i];
    }
}

void solve() {
    int n,m;
    cin>>n>>m;
    if (n == m) {
        cout << 0 << lb;
        return;
    }
    cout<<ps[m-1] - ps[n-1]<<lb;
}

int main() {
    fast
    precompute();
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