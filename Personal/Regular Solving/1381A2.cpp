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
#define endl '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<int> ops;
    int l=0, r=n-1;
    int flips=0;

    for (int i=n-1; i>=0; --i) {
        char ac, bc;
        bc = b[i];

        if (flips%2 == 0) { 
            ac = a[l];
        } else { 
            ac = (a[r] == '0' ? '1' : '0');
        }

        if (ac == bc) {
            ops.pb(1);
        }
        ops.pb(i + 1);

        if (flips%2 == 0) {
            l++;
        } else {
            r--;
        }
        flips++;
    }
    cout << sz(ops);
    for (int p : ops) {
        cout << " " << p;
    }
    cout << endl;
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
//          Mahfuz Uddin                  //
//------------------------------------------//