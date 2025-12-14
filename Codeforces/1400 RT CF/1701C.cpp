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
    cin>>n>>m;
    vector<int> cnt(n+1, 0);
    for(int i=0; i<m; i++){
        int x; cin>>x;
        cnt[x]++;
    }
    int l=1, r=2*m;
    int ans=r;
    while(l<=r){
        int mid = l+(r-l)/2;
        ll nd=0, fr=0;
        for(int i=1;i<=n;i++){
            if(cnt[i]>mid) nd += cnt[i]-mid;
            else fr += (mid-cnt[i])/2;
        }
        if(fr>=nd){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
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