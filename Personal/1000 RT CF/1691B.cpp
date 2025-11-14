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
    vector<int> s(n);
    for(int i=0; i<n; ++i) cin>>s[i];

    vector<int> p(n);
    bool ok=true;
    for(int i=0; i<n; ){
        int j=i;
        while(j<n && s[j]==s[i]){
            j++;
        }
        int l=i;
        int r=j-1;
        if(l==r){
            ok=false;
            break;
        }
        p[r]=l;
        for(int k=l; k<r; ++k){
            p[k]=k+1;
        }
        i=j;
    }

    if(!ok){
        cout<<-1<<lb;
    } else {
        for(int i=0; i<n; ++i){
            cout << p[i]+1 << (i==n-1 ? "" : " ");
        }
        cout << lb;
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