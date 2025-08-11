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
    string s;
    cin >> s;
    int n = s.length();
    if(n == 0 || s.find('A') == string::npos || s.find('B') == string::npos) {
        cout << 0 << lb;
        return;
    }

    bool has_bb = false;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == 'B' && s[i+1] == 'B') {
            has_bb = true;
            break;
        }
    }

    ll total_a = 0;
    for(char c: s) {
        if(c == 'A') total_a++;
    }

    if(has_bb || s[0] == 'B' || s[n-1] == 'B') {
        cout << total_a << lb;
        return;
    }
    
    vector<int> a_blocks;
    int current_a = 0;
    for(int i=0; i<n; ++i) {
        if(s[i] == 'A') {
            current_a++;
        } else {
            if(current_a > 0) {
                a_blocks.pb(current_a);
            }
            current_a = 0;
        }
    }
    if(current_a > 0) {
        a_blocks.pb(current_a);
    }

    if(a_blocks.empty()){
        cout<<0<<lb;
        return;
    }

    sort(all(a_blocks));
    cout << total_a - a_blocks[0] << lb;
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