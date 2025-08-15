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
    vector<string> s(n);
    for(int i=0; i<n; ++i) cin>>s[i];

    int mx=0;
    for (char ch = 'a'; ch <= 'e'; ++ch) {
        vector<int> v;
        for (const auto& w : s) {
            int c1 = 0;
            for(char c:w) {
                if(c == ch) c1++;
            }
            int c2 = sz(w) - c1;
            v.pb(c1-c2);
        }

        sort(rall(v));

        int sm=0;
        int cnt=0;
        for(int x:v) {
            sm+=x;
            if(sm>0) {
                cnt++;
            } else {
                break;
            }
        }
        mx=max(mx, cnt);
    }
    cout<<mx<<lb;
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