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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    int c0 = 0, c1 = 0;
    for(char ch : s) {
        if(ch == '0') c0++;
        else c1++;
    }
    
    int k_min = abs(c0 - c1) / 2;
    int k_max = (c0 / 2) + (c1 / 2);
    
    if (k < k_min || k > k_max) {
        cout << "NO" << lb;
    } else {
        if ((k_max - k) % 2 == 0) {
            cout << "YES" << lb;
        } else {
            cout << "NO" << lb;
        }
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
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//