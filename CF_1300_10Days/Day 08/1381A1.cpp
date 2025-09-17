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
    string a, b;
    cin >> a >> b;
    vector<int> p;
    for(int i = n - 1; i>=0; i--) {
        if(a[i] == b[i]) {
            continue;
        }
        if (a[0] == b[i]) {
            p.pb(1);
            a[0] = '1' + '0' - a[0];
        }
        p.pb(i + 1);
        for(int j=0;j<=i;++j) {
            a[j]='1'+'0'-a[j];
        }
        reverse(a.begin(),a.begin()+i+1);
    }
    cout << sz(p);
    for(int x:p) {
        cout << " " << x;
    }
    cout<<lb;
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