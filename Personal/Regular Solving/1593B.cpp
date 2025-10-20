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

int f(string s, string t) {
    int n = sz(s);
    int j = -1;
    int c = 0;

    for(int i = n - 1; i >= 0; i--) {
        if(s[i] == t[1]) {
            j = i;
            break;
        }
    }
    if(j == -1) return INF;
    c = (n - 1) - j;

    for(int i = j - 1; i >= 0; i--) {
        if(s[i] == t[0]) {
            c += (j - i - 1);
            return c;
        }
    }
    return INF;
}

void solve() {
    string s;
    cin >> s;
    int ans = INF;
    ans = min(ans, f(s, "00"));
    ans = min(ans, f(s, "25"));
    ans = min(ans, f(s, "50"));
    ans = min(ans, f(s, "75"));
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
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//