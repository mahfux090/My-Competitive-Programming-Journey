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
    vector<int> pos;
    for(int i=1; i<=n; ++i) {
        pos.pb(i);
    }
    vector<int> idx;
    for(int i=1; i<n; ++i) {
        idx.pb(i);
    }
    
    while(sz(pos) > 1) {
        int bbit = -1;
        int md = INF;
        int ps = sz(pos);
        int h = ps/2;
        
        for(int j=0; j<17; ++j) { // 2e4 needs up to ~15 bits
            int c = 0;
            for(int k : pos) {
                if((k & (1 << j))) ++c;
            }
            if(c == 0 || c == ps) continue;
            int d = abs(c - h);
            if(d < md) {
                md = d;
                bbit = j;
            }
        }
        
        if(bbit == -1) {
            for (int j=0; j<17; ++j) {
                int c = 0;
                for(int k : pos) {
                    if ((k & (1 << j))) ++c;
                }
                if (c > 0 && c < ps) {
                    bbit = j;
                    break;
                }
            }
        }
        
        int m = 1 << bbit;
        int is = sz(idx);
        vector<int> r(is);
        for(int i=0; i<is; ++i) {
            cout << "? " << idx[i] << " " << m << endl;
            int b;
            cin >> b;
            if(b == -1) return;
            r[i] = b;
        }
        
        int cy = 0;
        for(int b : r) if(b) ++cy;
        int cs = 0;
        for(int k:pos) if((k & m)) ++cs;
        
        vector<int> npos;
        vector<int> nidx;
        int ex;
        
        if(cy == cs) {
            ex = 0;
            for(int k:pos) {
                if((k & m) == 0) npos.pb(k);
            }
        } else {
            ex = 1;
            for(int k:pos) {
                if((k & m) != 0) npos.pb(k);
            }
        }
        
        for(int i=0; i<is; ++i) {
            if(r[i] == ex) {
                nidx.pb(idx[i]);
            }
        }
        pos = move(npos);
        idx = move(nidx);
    }
    
    int ans = pos[0];
    cout << "! " << ans << endl;
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