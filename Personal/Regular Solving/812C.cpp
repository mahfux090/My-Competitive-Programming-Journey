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
    ll s;
    cin>>n>>s;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    int l=0, r=n;
    int k_ans = 0;
    ll c_ans=0;

    while(l<=r){
        int m=l+(r-l)/2;
        if(m==0){
            l = m+1;
            continue;
        }

        vector<ll> c(n);
        for(int i=0; i<n; ++i){
            c[i]=a[i]+(ll)(i+1)*m;
        }
        sort(all(c));

        ll tc=0;
        for(int i = 0; i<m; i++){
            tc += c[i];
            if(tc > s) break; 
        }

        if(tc <= s){
            k_ans = m;
            c_ans = tc;
            l=m+1;
        }else{
            r = m-1;
        }
    }
    cout<< k_ans << " " << c_ans << lb;
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