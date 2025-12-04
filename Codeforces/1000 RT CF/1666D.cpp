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
    string s,t;
    cin >> s >> t;
    int n=sz(s);
    int m=sz(t);
    
    int p = n-1;
    vector<int> ki;
    bool ok=true;
    
    for(int i=m-1; i>=0; i--) {
        while(p >= 0 && s[p] != t[i]) {
            p--;
        }
        if(p < 0) {
            ok = false;
            break;
        }
        ki.pb(p);
        p--;
    }
    
    if(!ok) {
        cout << "NO" << lb;
        return;
    }
    
    vector<bool> ik(n, false);
    for(int idx : ki) {
        ik[idx] = true;
    }
    
    for(int i=0; i<n; i++) {
        if(ik[i]) { 
            for(int j=i+1; j<n; j++) {
                if(!ik[j] && s[j] == s[i]) {
                    ok = false;
                    break;
                }
            }
        }
        if(!ok) break;
    }
    
    if(ok) cout << "YES" << lb;
    else cout << "NO" << lb;
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