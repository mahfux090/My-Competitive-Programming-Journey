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

void print_128(__int128_t n) {
    if (n == 0) {
        cout << "0";
        return;
    }
    string s = "";
    while (n > 0) {
        s += (n % 10) + '0';
        n /= 10;
    }
    reverse(all(s));
    cout << s;
}

void solve() {
    ll D, d, P, Q;
    cin >> D >> d >> P >> Q;

    __int128_t n = D / d;
    ll rem = D % d;
    
    __int128_t total_money = 0;
    
    __int128_t sum_of_rates_q = n * (n - 1) / 2;
    __int128_t full_intervals_money = (__int128_t)d * (n * P + sum_of_rates_q * Q);
    
    __int128_t remaining_days_money = (__int128_t)rem * (P + n * Q);
    
    total_money = full_intervals_money + remaining_days_money;
    
    print_128(total_money);
    cout << lb;
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