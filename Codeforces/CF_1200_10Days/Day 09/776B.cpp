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
    cin>>n;
    if (n <= 2) {
        cout << 1 << lb;
        for (int i=0; i < n; ++i) {
            cout << 1 << " ";
        }
        cout << lb;
        return;
    }

    cout<<2<<lb;
    int l = n + 2;
    vector<bool> p(l, true);
    p[0]=p[1]=false;
    for (int i = 2; i*i<l; i++) {
        if(p[i]){
            for(int j=i*i; j<l; j+=i)
                p[j]=false;
        }
    }

    for (int i=2; i<=n+1; ++i) {
        if (p[i]) {
            cout<<1<<" ";
        } else {
            cout<<2<<" ";
        }
    }
    cout<<lb;
}

int main() {
    fast
    int t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//