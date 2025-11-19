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
    vector<pll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].ff;
        a[i].ss = i; 
    }

    sort(all(a));

    vector<ll> pre(n);
    pre[0] = a[0].ff;
    for(int i = 1; i < n; i++) {
        pre[i] = pre[i-1] + a[i].ff;
    }

    vector<int> ans(n); 
    vector<int> final_res(n); 

    ans[n-1] = n - 1;

    for(int i = n - 2; i >= 0; i--) {
        if(pre[i] >= a[i+1].ff) {
            ans[i] = ans[i+1];
        } else {
            ans[i] = i;
        }
    }
    for(int i = 0; i < n; i++) {
        final_res[a[i].ss] = ans[i];
    }

    for(int i = 0; i < n; i++) {
        cout << final_res[i] << " ";
    }
    cout << lb;
}

int main() {
    fast
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}