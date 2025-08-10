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
    vector<int> a(k);
    vector<ll> t(k);
    for(int i=0;i<k;i++) cin>>a[i];
    for(int i=0;i<k;i++) cin>>t[i];

    vector<ll> res(n, LINF * 2);
    for(int i=0;i<k;i++){
        res[a[i]-1] = t[i];
    }
    
    for(int i=1; i<n; ++i){
        res[i] = min(res[i], res[i-1] + 1);
    }

    for(int i=n-2; i>=0; --i){
        res[i] = min(res[i], res[i+1] + 1);
    }
    
    for(int i=0; i<n; ++i){
        cout << res[i] << " ";
    }
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