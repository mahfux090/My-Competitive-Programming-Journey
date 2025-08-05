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
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> motu, tomu;

    for(int i=0; i<n; i++){
        cin >> a[i];
        if (i%2==0) {
            motu.pb(a[i]);
        } else {
            tomu.pb(a[i]);
        }
    }
    
    sort(all(motu));
    sort(all(tomu));
    
    int p1 = motu.size()-1;
    int p2 = 0;
    int swaps=0;

    while(swaps<k && p1>=0 && p2<tomu.size()){
        if(motu[p1] > tomu[p2]){
            swap(motu[p1], tomu[p2]);
            p1--;
            p2++;
            swaps++;
        } else {
            break;
        }
    }

    ll sm=0, st=0;
    for(int x:motu) sm+=x;
    for(int x:tomu) st+=x;

    if(st>sm){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
//          Mahfuz Uddin                    //
//------------------------------------------//