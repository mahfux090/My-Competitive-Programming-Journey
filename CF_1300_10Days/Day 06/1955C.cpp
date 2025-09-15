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
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    int l = 0, r = n - 1;
    int sunk = 0;

    while (l < r && k > 0) {
        if (a[l] < a[r]) {
            ll cost = a[l];
            if (k >= 2 * cost) {
                k -= 2 * cost;
                a[r] -= cost;
                l++;
                sunk++;
            } else {
                a[l] -= (k + 1) / 2;
                if (a[l] <= 0) {
                    sunk++;
                }
                k = 0;
            }
        } else if (a[r] < a[l]) {
            ll cost = a[r];
            if (k >= 2 * cost) {
                k -= 2 * cost;
                a[l] -= cost;
                r--;
                sunk++;
            } else {
                a[r] -= k / 2;
                if (a[r] <= 0) {
                    sunk++;
                }
                k = 0;
            }
        } else { 
            ll cost = a[l];
            if (k >= 2 * cost) {
                k -= 2 * cost;
                l++;
                r--;
                sunk += 2;
            } else {
                a[l] -= (k + 1) / 2;
                if (a[l] <= 0) {
                    sunk++;
                }
                k = 0;
            }
        }
    }

    if (l == r && k > 0) {
        if (k >= a[l]) {
            sunk++;
        }
    }

    cout << sunk << lb;
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