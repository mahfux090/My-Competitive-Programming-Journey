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
    cin >> n;
    vector<int> a(n + 1);
    vector<int> max_idx(1001, -1);

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        max_idx[a[i]] = i; 
    }

    int ans = -1;

    for(int i = 1; i <= 1000; i++) {
        if(max_idx[i] == -1) continue;
        for(int j = i; j <= 1000; j++) {
            if(max_idx[j] != -1) {
                if(__gcd(i, j) == 1) {
                    ans = max(ans, max_idx[i] + max_idx[j]);
                }
            }
        }
    }

    cout << ans << lb;
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