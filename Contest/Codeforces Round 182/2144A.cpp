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
    vector<ll> a(n);
    vector<ll> p(n + 1, 0);
    for(int i=0;i<n;i++) {
        cin >> a[i];
        p[i+1] = p[i] + a[i];
    }

    for (int l = 1; l < n; l++) {
        for (int r=l+1; r < n; r++) {
            ll s1 = p[l] % 3;
            ll s2 = (p[r] - p[l]) % 3;
            ll s3 = (p[n] - p[r]) % 3;

            if ((s1 == s2 && s2 == s3) || (s1 != s2 && s1 != s3 && s2 != s3)) {
                cout << l << " " << r << lb;
                return;
            }
        }
    }

    cout << 0 << " " << 0 << lb;
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