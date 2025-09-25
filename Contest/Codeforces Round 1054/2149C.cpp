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
    vector<int> c(n + 1, 0);
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        c[x]++;
    }

    int m = 0;
    for(int i = 0; i < k; i++) {
        if(c[i] == 0) {
            m++;
        }
    }

    int kc = c[k];
    cout << max(m, kc) << lb;
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