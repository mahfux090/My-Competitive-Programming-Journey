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
    short n;
    cin >> n;
    vector<short> a(n);
    bool s =true;
    for(short i=0;i<n;i++) {
        cin >> a[i];
        if(a[i]!=i+1) s = false;
    }

    if(s) {
        cout << 0 << lb;
        return;
    }

    if(a[0] == 1 || a[n-1] == n) {
        cout << 1 << lb;
        return;
    }

    if(a[0]==n && a[n-1]==1) {
        cout << 3 << lb;
        return;
    }

    cout << 2 << lb;
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