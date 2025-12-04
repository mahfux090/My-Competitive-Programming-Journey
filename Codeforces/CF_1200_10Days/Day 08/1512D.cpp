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
    vector<ll> b(n+2);
    for(int i=0; i<n+2; ++i){
        cin >> b[i];
    }
    sort(all(b));

    ll s1 = 0;
    for(int i=0; i<n; ++i) s1+=b[i];

    if(s1 == b[n]){
        for(int i=0; i<n; ++i){
            cout << b[i] << " ";
        }
        cout << lb;
        return;
    }

    ll s2 = s1 + b[n];
    int f = -1;
    for(int i=0; i<=n; ++i){
        if(s2 - b[i] == b[n+1]){
            f = i;
            break;
        }
    }

    if(f != -1){
        for(int i=0; i<=n; ++i){
            if(i == f) continue;
            cout << b[i] << " ";
        }
        cout << lb;
        return;
    }
    
    cout << -1 << lb;
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