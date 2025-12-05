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
    string a, b;
    cin >> a >> b;
    int c0 = 0, c1 = 0;
    bool same = false, diff = false;
    for(int i = 0; i < n; i++) {
        if(a[i] == '0') c0++;
        else c1++;

        if(a[i] == b[i]) same = true;
        else diff = true;

        if(c0 == c1) {
            if(same && diff) {
                cout << "NO" << lb;
                return;
            }
            same = false;
            diff = false;
        }
    }
    if(diff) {
        cout << "NO" << lb;
    } else {
        cout << "YES" << lb;
    }
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