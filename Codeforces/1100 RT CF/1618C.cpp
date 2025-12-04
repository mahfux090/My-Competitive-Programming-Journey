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

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    ll g1 = 0, g2 = 0;
    
    for(int i=0;i<n; i+=2) g1 = gcd(g1, a[i]);
    for(int i=1;i<n; i+=2) g2 = gcd(g2, a[i]);

    bool ok1 = true;
    for(int i=1; i<n; i+=2) {
        if(a[i] % g1 == 0) {
            ok1 = false;
            break;
        }
    }
    
    if(ok1) {
        cout << g1 << lb;
        return;
    }

    bool ok2 = true;
    for(int i=0; i<n; i+=2) {
        if(a[i] % g2 == 0) {
            ok2 = false;
            break;
        }
    }

    if(ok2) cout << g2 << lb;
    else cout << 0 << lb;
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