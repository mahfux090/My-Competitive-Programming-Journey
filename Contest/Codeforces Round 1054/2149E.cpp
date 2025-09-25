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

ll calculate(int n, int K, int l, int r, const vector<int>& a) {
    if (K < 0) return 0;
    ll count = 0;
    map<int, int> mp;
    int left = 0;
    for (int right = 0; right < n; ++right) {
        mp[a[right]]++;
        while (sz(mp) > K) {
            mp[a[left]]--;
            if (mp[a[left]] == 0) {
                mp.erase(a[left]);
            }
            left++;
        }
        
        ll valid_start_p = max((ll)left, (ll)right - r + 1);
        ll valid_end_p = (ll)right - l + 1;
        
        if (valid_start_p <= valid_end_p) {
            count += (valid_end_p - valid_start_p + 1);
        }
    }
    return count;
}


void solve() {
    int n, k, l, r;
    cin >> n >> k >> l >> r;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll ans_at_most_k = calculate(n, k, l, r, a);
    ll ans_at_most_k_minus_1 = calculate(n, k - 1, l, r, a);
    cout << ans_at_most_k - ans_at_most_k_minus_1 << lb;
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