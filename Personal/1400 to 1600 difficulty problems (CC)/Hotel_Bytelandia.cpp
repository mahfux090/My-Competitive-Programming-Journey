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
    cin >> n;
    vector<int> a(n), d(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0; i<n; i++) cin >> d[i];
    
    sort(all(a));
    sort(all(d));
    
    int i=0, j=0;
    int cur=0, mx=0;
    
    while(i<n && j<n){
        if(a[i] < d[j]){
            cur++;
            i++;
            mx=max(mx, cur);
        } else {
            cur--;
            j++;
        }
    }
    
    cout << mx << endl;
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
//          Mahfuz Uddin
// //------------------------------------------//