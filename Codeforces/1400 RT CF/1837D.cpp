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
    int n; cin>>n;
    string s; cin >> s;
    int cnt1 = 0, cnt2 = 0;
    for(char c : s) {
        if(c == '(') cnt1++;
        else cnt2++;
    }
    if(cnt1 != cnt2) {
        cout << -1 << lb;
        return;
    }

    vector<int> ans(n);
    int bal = 0;
    bool u1=false, u2=false;

    for(int i=0; i<n; i++) {
        if(bal > 0) {
            ans[i] = 1;
            u1 = true;
        } else if(bal < 0) {
            ans[i] = 2;
            u2 = true;
        } else {
            if(s[i] == '(') {
                ans[i] = 1; 
                u1 = true;
            } else {
                ans[i] = 2; 
                u2 = true;
            }
        }

        if(s[i] == '(') bal++;
        else bal--;
    }

    if(u1 && u2) {
        cout << 2 << lb;
        for(int i=0; i<n; i++) cout << ans[i] << (i==n-1 ? "" : " ");
        cout << lb;
    } else {
        cout << 1 << lb;
        for(int i=0; i<n; i++) cout << 1 << (i==n-1 ? "" : " ");
        cout << lb;
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