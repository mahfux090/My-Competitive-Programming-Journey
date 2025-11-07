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
    ll x1,x2;
    int p1,p2;
    cin >> x1 >> p1;
    cin >> x2 >> p2;

    int l1 = to_string(x1).length();
    int l2 = to_string(x2).length();

    int d1=l1+p1;
    int d2=l2+p2;

    if (d1 > d2) {
        cout << '>' << lb;
    } else if (d1 < d2) {
        cout << '<' << lb;
    } else {
        int m = min(p1, p2);
        p1 -= m;
        p2 -= m;
        
        while(p1>0){
            x1 *= 10;
            p1--;
        }
        while(p2>0){
            x2 *= 10;
            p2--;
        }

        if(x1>x2)cout<<'>'<<lb;
        else if(x1<x2) cout<<'<'<<lb;
        else cout << '=' << lb;
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
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//