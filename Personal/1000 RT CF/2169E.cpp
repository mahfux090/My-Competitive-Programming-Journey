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

struct P {
    ll x, y, c;
};

void solve() {
    int n;
    cin >> n;
    vector<P> p(n);
    ll ct = 0;
    for(int i=0; i<n; ++i) cin >> p[i].x;
    for(int i=0; i<n; ++i) cin >> p[i].y;
    for(int i=0; i<n; ++i) {
        cin >> p[i].c;
        ct += p[i].c;
    }
    
    sort(all(p), [](const P& a, const P& b) {
        return a.x < b.x;
    });
    
    ll mg = LINF;
    
    for(int i=0; i<n; ++i) {
        for(int j=i; j<n; ++j) {
            ll ym = min(p[i].y, p[j].y);
            ll yx = max(p[i].y, p[j].y);
            ll mk = LINF, ml = LINF;
            
            for(int m=i; m<=j; ++m) {
                ll cef = (m == i || m == j) ? 0 : p[m].c;
                
                if(p[m].y <= ym) {
                    mk = min(mk, cef + 2 * p[m].y);
                }
                if(p[m].y >= yx) {
                    ml = min(ml, cef - 2 * p[m].y);
                }
            }
            
            ll g = (p[i].c + (i == j ? 0 : p[j].c) - 2 * (p[j].x - p[i].x)) + mk + ml;
            mg = min(mg, g);
        }
    }
    
    cout << ct - mg << lb;
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