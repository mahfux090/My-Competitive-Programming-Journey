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
    ll l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int wins = 0;
    ll cur_sum = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        cur_sum += a[right];
        
        while (cur_sum > r && left <= right) {
            cur_sum -= a[left];
            left++;
        }

        if (cur_sum >= l && cur_sum <= r) {
            wins++;
            cur_sum = 0;
            left = right + 1;
        }
    }
    cout << wins << lb;
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