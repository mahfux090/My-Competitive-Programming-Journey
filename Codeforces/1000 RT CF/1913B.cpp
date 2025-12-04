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
    string s;
    cin >> s;
    int n=sz(s);

    vector<int> p0(n+1, 0);
    vector<int> p1(n+1, 0);

    for(int i=0; i<n; i++) {
        p0[i+1] = p0[i];
        p1[i+1] = p1[i];
        if(s[i] == '0') {
            p0[i+1]++;
        } else {
            p1[i+1]++;
        }
    }

    int n0 = p0[n];
    int n1 = p1[n];

    int mk = 0;
    for(int k=n; k>=0; k--) {
        int q0=p0[k];
        int q1=p1[k];

        if(q1 <= n0 && q0 <= n1) {
            mk=k;
            break;
        }
    }
    cout << n - mk << lb;
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