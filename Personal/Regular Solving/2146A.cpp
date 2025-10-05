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
    vector<int> cnts(n+1,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cnts[x]++;
    }

    vector<int> f_cnts(n+2,0);
    for(int i=1; i<=n; i++){
        if (cnts[i] > 0) {
            f_cnts[cnts[i]]++;
        }
    }

    int mx_len=0;
    int num_ge=0;
    for(int k=n; k>=1; k--){
        num_ge += f_cnts[k];
        mx_len = max(mx_len, k * num_ge);
    }
    cout<<mx_len<<lb;
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