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
    int item_count, voucher_count;
    cin >> item_count >> voucher_count;
    
    vector<ll> prices(item_count);
    ll total_price = 0;
    for(int i = 0; i < item_count; i++) {
        cin >> prices[i];
        total_price += prices[i];
    }
    
    vector<int> vouchers(voucher_count);
    for(int i=0; i<voucher_count; ++i) {
        cin >> vouchers[i];
    }

    sort(prices.rbegin(), prices.rend());
    sort(vouchers.begin(), vouchers.end());
    
    int product_idx = 0;
    for(int v_size : vouchers) {
        if(product_idx + v_size > item_count) {
            break;
        }
        product_idx += v_size - 1;
        total_price -= prices[product_idx];
        product_idx++;
    }

    cout << total_price <<lb;
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