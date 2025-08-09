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
    string s;
    cin>>s;

    if (n==0) {
        cout<<0<<lb;
        return;
    }

    int b_cnt=0;
    int w_cnt=0;

    char p=' ';
    for (char c : s) {
        if (c!=p) {
            if (c=='B') {
                b_cnt++;
            } else {
                w_cnt++;
            }
        }
        p=c;
    }
    cout<<min(b_cnt, w_cnt)<<lb;
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