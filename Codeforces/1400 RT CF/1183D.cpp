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
    vector<int> cnt(n+1,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cnt[x]++;
    }
    vector<int> v;
    for(int i=1;i<=n;i++){
        if(cnt[i]>0) v.pb(cnt[i]);
    }
    sort(rall(v));
    ll ans=v[0];
    int lst=v[0];
    for(int i=1;i<sz(v);i++){
        if(lst==0) break;
        int take=min(v[i],lst-1);
        take=max(0,take);
        ans+=take;
        lst=take;
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