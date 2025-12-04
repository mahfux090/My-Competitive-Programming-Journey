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
const int MOD = 998244353;
const int MAXN = 200005;

ll fact[MAXN];

void precompute_factorials() {
    fact[0] = 1;
    for(int i=1; i < MAXN; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}

void solve() {
    string s;
    cin>>s;
    int n=sz(s);
    if(n == 0) {
        cout << "0 1" << lb;
        return;
    }

    ll k = 0;
    ll ways = 1;
    
    int i = 0;
    while(i < n) {
        int j = i;
        while(j + 1 < n && s[j + 1] == s[i]) {
            j++;
        }
        
        ll len = j - i + 1;
        if (len > 1) {
            k += (len - 1);
            ways = (ways * len) % MOD;
        }
        
        i = j + 1;
    }
    
    ways = (ways * fact[k]) % MOD;
    
    cout << k << " " << ways << lb;
}

int main() {
    fast
    precompute_factorials();
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