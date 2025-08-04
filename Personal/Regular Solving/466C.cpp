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
#define endl '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    int n;
    cin>>n;
    vector<ll> a(n);
    ll s = 0;
    for(int i=0;i< n;i++){
        cin >> a[i];
        s += a[i];
    }

    if (s % 3 != 0) {
        cout << 0 << endl;
        return;
    }

    if (n<3) {
        cout<<0<<endl;
        return;
    }

    ll t=s/3;
    ll ans = 0;
    ll c = 0;
    ll cs=0;

    for (int i=0; i<n-1; ++i) {
        cs += a[i];
        if(cs == 2*t){
            ans += c;
        }
        if (cs == t) {
            c++;
        }
    }

    cout<<ans<<endl;
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
//          Mahfuz Uddin                    //
//------------------------------------------//