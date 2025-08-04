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
    vector<int> a(n);
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }

    map<int, int> m;
    int ml=0;
    int ev=0;

    for(int x:a){
        m[x]=m[x-1]+1;
        if(m[x]>ml){
            ml=m[x];
            ev=x;
        }
    }

    cout << ml << endl;

    vector<int> ans;
    int c = ev-ml+1;

    for(int i = 0; i < n; i++) {
        if(a[i]==c){
            ans.pb(i+1);
            c++;
        }
    }

    for(int i = 0; i<sz(ans); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
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
//          Mahfuz Uddin                  //
//------------------------------------------//