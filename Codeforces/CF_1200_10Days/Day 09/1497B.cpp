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
    int n,m;
    cin>>n >>m;
    map<int, int>c;
    for (int i=0; i<n; ++i) {
        int a;
        cin>>a;
        c[a%m]++;
    }

    int ans=0;
    if(c[0]>0) {
        ans++;
    }

    for(int i=1; i*2<=m; ++i){
        int j=m-i;
        if(i*2==m){
            if(c[i]>0) ans++;
            continue;
        }

        int c1=c[i];
        int c2=c[j];
        if(c1==0 && c2==0) continue;
        
        if(c1>c2) swap(c1,c2);

        if(c1==0){
            ans+=c2;
        } else {
            ans++;
            if(c2>c1){
                ans+=c2-c1-1;
            }
        }
    }
    cout<<ans<<lb;
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