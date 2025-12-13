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
    ll n, m;
    cin >> n >> m;
    ll temp = n;
    int c2 = 0, c5 = 0;
    while(temp > 0 && temp % 2 == 0) {
        c2++;
        temp /= 2;
    }
    while(temp > 0 && temp % 5 == 0) {
        c5++;
        temp /= 5;
    }
    
    ll k = 1;
    while(c2 < c5 && k * 2 <= m) {
        k *= 2;
        c2++;
    }
    while(c5 < c2 && k * 5 <= m) {
        k *= 5;
        c5++;
    }
    
    while(k * 10 <= m) {
        k *= 10;
    }
    
    if (k == 1) {
        cout << n * m << lb;
    } else {
        k *= (m / k);
        cout << n * k << lb;
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