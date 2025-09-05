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
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    vector<int> v;
    if(n>0) {
        v.pb(a[0]);
    }
    for(int i=1;i<n;i++) {
        if(a[i]!=v.back()){
            v.pb(a[i]);
        }
    }

    int m=sz(v);
    if(m<=2) {
        cout << m << lb;
        return;
    }

    int c=2;
    for(int i=1; i < m - 1; i++) {
        bool pk = (v[i-1]<v[i] && v[i]>v[i+1]);
        bool vl = (v[i-1]>v[i] && v[i]<v[i+1]);
        if(pk || vl) {
            c++;
        }
    }
    cout<<c<<lb;
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