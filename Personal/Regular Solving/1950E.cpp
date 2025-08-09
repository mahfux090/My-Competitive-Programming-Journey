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

    vector<int> v;
    for(int i=1; i*i<=n; ++i) {
        if(n%i==0) {
            v.pb(i);
            if(i*i!=n) {
                v.pb(n/i);
            }
        }
    }
    sort(all(v));

    for(int l : v) {
        int c=0;
        for(int i=0; i<n; ++i) {
            if(s[i]!=s[i%l]) {
                c++;
            }
        }
        if(c<=1) {
            cout<<l<<lb;
            return;
        }

        if(l<n) {
            c=0;
            for(int i=0; i<n; ++i) {
                if(s[i]!=s[l+(i%l)]) {
                    c++;
                }
            }
            if(c<=1) {
                cout<<l<<lb;
                return;
            }
        }
    }
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