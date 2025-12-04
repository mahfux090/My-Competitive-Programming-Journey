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
    vector<int> h(n);
    for(int i=0; i<n; i++) {
        cin >> h[i];
    }
    sort(all(h));
    
    if(n == 2){
        cout << h[0] << " " << h[1] << lb;
        return;
    }

    int min_d = INF;
    int idx = -1;
    for (int i = 0; i < n - 1; i++) {
        if(h[i+1]-h[i] < min_d) {
            min_d=h[i+1]-h[i];
            idx=i;
        }
    }

    cout << h[idx] << " ";
    for(int i=idx+2; i<n; i++) {
        cout<<h[i] << " ";
    }
    for(int i=0; i<idx; i++) {
        cout << h[i] << " ";
    }
    cout << h[idx+1] << lb;
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