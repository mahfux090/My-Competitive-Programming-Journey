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
    vector<int> v(m);
    for(int i=0;i<m;i++) cin>>v[i];
    sort(all(v));
    vector<int> g;
    for(int i=0;i<m-1;i++) {
        g.pb(v[i+1]-v[i]-1);
    }
    g.pb(n-v[m-1]+v[0]-1);
    sort(rall(g));
    int ans=0,cnt=0;
    for(int x:g) {
        int cur=x-cnt*2;
        if(cur<=0) break;
        if(cur==1) {
            ans++;
            cnt++;
        } else if(cur==2) {
            ans++;
            cnt++;
        } else {
            ans+=cur-1;
            cnt+=2;
        }
    }
    cout<<n-ans<<lb;
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