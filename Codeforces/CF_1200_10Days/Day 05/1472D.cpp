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
    cin >> n;
    vector<ll> ev,od;
    for (int i = 0; i<n; ++i) {
        ll a;
        cin>>a;
        if(a%2==0) ev.pb(a);
        else od.pb(a);
    }
    sort(rall(ev));
    sort(rall(od));
    ll as=0,bs=0;
    int ep=0,op=0;
    for(int i = 0; i<n; ++i) {
        if(i%2==0) {
            bool ed = (ep>=sz(ev));
            bool odn = (op>=sz(od));
            if(ed){
                op++;
            } else if (odn) {
                as += ev[ep];
                ep++;
            }else{
                if(ev[ep]>=od[op]){
                    as+=ev[ep];
                    ep++;
                } else {
                    op++;
                }
            }
        } else {
            bool ed = (ep>=sz(ev));
            bool odn = (op>=sz(od));
            if(odn) {
                ep++;
            } else if (ed) {
                bs+=od[op];
                op++;
            } else {
                if(od[op]>=ev[ep]){
                    bs+=od[op];
                    op++;
                } else {
                    ep++;
                }
            }
        }
    }
    if (as>bs) cout << "Alice" << lb;
    else if (bs>as) cout << "Bob" << lb;
    else cout << "Tie" << lb;
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