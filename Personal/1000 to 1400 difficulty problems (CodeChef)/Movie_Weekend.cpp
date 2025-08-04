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
    cin >>n;
    int l[n], r[n];
    for (int i=0; i<n; i++) {
        cin>>l[i];
    }
    for (int i = 0; i<n; i++){
        cin>>r[i];
    }

    int mp=-1;
    int br=-1;
    int bi=-1;

    for (int i = 0; i<n; i++) {
        int cp = l[i] * r[i];
        if (cp > mp) {
            mp=cp;
            br = r[i];
            bi=i+1;
        } else if (cp == mp) {
            if (r[i]>br) {
                br=r[i];
                bi = i + 1;
            }
        }
    }
    cout<<bi<<endl;
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
//          Mahfuz Uddin //
//------------------------------------------//