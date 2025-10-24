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
    int n,q;
    cin>>n >> q;
    string s;
    cin >> s;
    
    bool b = false;
    for(char c:s) {
        if(c == 'B') {
            b = true;
            break;
        }
    }
    
    while(q--){
        ll a;
        cin >> a;
        
        if(!b) {
            cout << a << lb;
            continue;
        }
        
        ll tm = 0;
        int i = 0;
        while(a > 0) {
            tm++;
            if(s[i] == 'A') {
                a--;
            } else {
                a /= 2;
            }
            i = (i + 1) % n;
        }
        cout << tm << lb;
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