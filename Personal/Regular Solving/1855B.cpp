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
    while(b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    ll n;
    cin>>n;
    ll l=1;
    ll k=1;
    while(true) {
        ll g = gcd(l, k);
        
        // Overflow check: l * (k/g) > n
        // Safely written as: (k/g) > (n/l)
        if(k/g > n/l) {
            break;
        }
        
        l = (l/g) * k;
        
        if(n % l != 0) {
            break;
        }
        
        k++;
    }
    cout << k-1 << lb;
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