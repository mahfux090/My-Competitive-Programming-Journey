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
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    int zc=0;
    map<pll, int> mp;

    for(int i=0;i<n;i++){
        if(a[i] == 0) {
            if(b[i] == 0) zc++;
        } else {
            ll num = -b[i];
            ll den = a[i];
            ll g=__gcd(abs(num), abs(den));
            num/=g;
            den/=g;
            if (den < 0) {
                den = -den;
                num = -num;
            }
            mp[{num, den}]++;
        }
    }

    int mx=0;
    if(!mp.empty()){
      for(auto i:mp){
        mx=max(mx, i.ss);
      }
    }

    cout << zc+mx << lb;
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