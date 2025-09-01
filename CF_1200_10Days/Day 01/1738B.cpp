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
    ll n;
    int k;
    cin >> n >> k;
    vector<ll> s(k);
    for(int i = 0; i < k; ++i) cin >> s[i];

    if (k == 1) {
        cout << "Yes" << lb;
        return;
    }

    for (int i = k - 2; i >= 1; --i) {
        if (s[i] - s[i - 1] > s[i + 1] - s[i]) {
            cout << "No" << lb;
            return;
        }
    }

    ll m = n - k + 1;
    ll diff = s[1] - s[0];
    ll first_sum = s[0];

    if (first_sum > m * diff) {
        cout << "No" << lb;
        return;
    }

    cout << "Yes" << lb;
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