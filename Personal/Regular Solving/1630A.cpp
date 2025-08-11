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
    cin>>n>>k;
    if(k==n-1){
        if(n==4){
            cout<<-1<<lb;
            return;
        }
        cout<<n-1<<" "<<n-2<<lb;
        cout<<1<<" "<<n-3<<lb;
        cout<<0<<" "<<2<<lb;
        for(int i=3;i<n/2;++i){
            cout<<i<<" "<<(n-1-i)<<lb;
        }
    } else if (k==0) {
        for (int i=0; i<n/2; ++i) {
            cout << i << " " << (n-1-i) << lb;
        }
    } else {
        cout << k << " " << n-1 << lb;
        cout << 0 << " " << (n-1-k) << lb;
        for (int i = 1; i < n/2; ++i) {
            if (i!=k && i!=(n-1-k)) {
                cout << i << " " << (n-1-i) << lb;
            }
        }
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
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//