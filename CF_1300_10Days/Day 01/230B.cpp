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

const int MAXN = 1000001;
vector<bool> is_prime(MAXN, true);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p < MAXN; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i < MAXN; i += p)
                is_prime[i] = false;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    while(n--) {
        ll x;
        cin >> x;
        if(x == 1) {
            cout << "NO" << lb;
            continue;
        }
        ll root = sqrt(x);
        if (root * root == x && is_prime[root]) {
            cout << "YES" << lb;
        } else {
            cout << "NO" << lb;
        }
    }
}

int main() {
    fast
    sieve();
    int t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//