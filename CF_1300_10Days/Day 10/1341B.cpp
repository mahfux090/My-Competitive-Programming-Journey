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
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> p(n, 0);
    for (int i = 1; i < n - 1; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            p[i] = 1;
        }
    }

    vector<int> ps(n, 0);
    ps[0] = p[0];
    for(int i=1; i<n; i++) {
        ps[i] = ps[i-1] + p[i];
    }
    
    int mx_p = -1;
    int l_ans = -1;

    for (int l = 0; l <= n - k; l++) {
        int r = l + k - 1;
        int current_p = ps[r - 1] - ps[l];
        if (current_p > mx_p) {
            mx_p = current_p;
            l_ans = l;
        }
    }

    cout << mx_p + 1 << " " << l_ans + 1 << lb;
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