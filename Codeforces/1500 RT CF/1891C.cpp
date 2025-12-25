#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define all(x) x.begin(),x.end()
#define pb push_back
#define lb '\n'

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(all(a));
    
    int l = 0, r = n - 1;
    ll ans = 0, x = 0;
    
    while(l < r) {
        if(x + a[l] <= a[r]) {
            x += a[l];
            ans += a[l];
            l++;
        }
        else {
            ll need = a[r] - x;
            a[l] -= need;
            x += need;
            ans += need + 1; 
            x = 0;           
            r--;            
            if(a[l] == 0) l++; 
        }
    }
    
    if(l == r) {
        ll rem = a[l];
        if(rem == 1) ans += 1; 
        else if(rem <= x) ans += 1; 
        else {
            ll k = (rem - x + 1) / 2;
            ans += k + 1;
        }
    }
    
    cout << ans << lb;
}

int main() {
    fast
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}