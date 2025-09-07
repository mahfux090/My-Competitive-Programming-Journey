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
    char c;
    cin >> n >> c;
    string s;
    cin>>s;

    bool all_c = true;
    for (char ch : s) {
        if(ch!=c) {
            all_c=false;
            break;
        }
    }

    if(all_c) {
        cout << 0 << lb;
        return;
    }

    for (int x=1; x<=n; ++x) {
        bool ok = true;
        for(int j=x; j<=n; j+=x) {
            if (s[j - 1] != c) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << 1 << lb;
            cout << x << lb;
            return;
        }
    }
    
    cout << 2 << lb;
    cout << n-1 << " " << n << lb;
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