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
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    
    sort(all(a));
    vector<ll> pref(n + 1, 0);
    for(int i=0; i<n; i++) {
        pref[i+1] = pref[i] + a[i];
    }

    ll ans = 0;
    for(int i=0; i<=k; i++) {
        int left_removed = 2 * i;
        int right_removed = k - i;
        
        
        ll current_sum = pref[n - right_removed] - pref[left_removed];
        ans = max(ans, current_sum);
    }

    cout << ans << lb;
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