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
    ll x, y, z;
    cin >> x >> y >> z;
    
    int ans = 0;
    
    if (x > 0) ans++;
    if (y > 0) ans++;
    if (z > 0) ans++;
    
   
    if (x >= 1 && y >= 1) {
        int current_ans = 1; 
        if (x - 1 > 0) current_ans++;
        if (y - 1 > 0) current_ans++;
        if (z > 0) current_ans++;
        ans = max(ans, current_ans);
    }
    if (y >= 1 && z >= 1) {
        int current_ans = 1; 
        if (x > 0) current_ans++;
        if (y - 1 > 0) current_ans++;
        if (z - 1 > 0) current_ans++;
        ans = max(ans, current_ans);
    }
    // R+B
    if (x >= 1 && z >= 1) {
        int current_ans = 1; 
        if (x - 1 > 0) current_ans++;
        if (y > 0) current_ans++;
        if (z - 1 > 0) current_ans++;
        ans = max(ans, current_ans);
    }

    if (x >= 1 && y >= 2 && z >= 1) {
        int current_ans = 2; 
        if (x - 1 > 0) current_ans++;
        if (y - 2 > 0) current_ans++;
        if (z - 1 > 0) current_ans++;
        ans = max(ans, current_ans);
    }
    // R+G, R+B
    if (x >= 2 && y >= 1 && z >= 1) {
        int current_ans = 2; 
        if (x - 2 > 0) current_ans++;
        if (y - 1 > 0) current_ans++;
        if (z - 1 > 0) current_ans++;
        ans = max(ans, current_ans);
    }
    // G+B, R+B
    if (x >= 1 && y >= 1 && z >= 2) {
        int current_ans = 2; 
        if (x - 1 > 0) current_ans++;
        if (y - 1 > 0) current_ans++;
        if (z - 2 > 0) current_ans++;
        ans = max(ans, current_ans);
    }

    // Case 3: Three secondary colors
    if (x >= 2 && y >= 2 && z >= 2) {
        int current_ans = 3; 
        if (x - 2 > 0) current_ans++;
        if (y - 2 > 0) current_ans++;
        if (z - 2 > 0) current_ans++;
        ans = max(ans, current_ans);
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
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//