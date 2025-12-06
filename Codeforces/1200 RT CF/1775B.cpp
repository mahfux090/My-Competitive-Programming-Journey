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

const int MX=200005;
int cnt[MX];

void solve() {
    int n;cin>>n;
    vector<vector<int>> a(n);
    for(int i=0;i<n;i++){
        int k;cin>>k;
        a[i].resize(k);
        for(int j=0;j<k;j++){
            cin>>a[i][j];
            cnt[a[i][j]]++;
        }
    }
    bool ans=false;
    for(int i=0;i<n;i++){
        bool ok=true;
        for(auto x:a[i]){
            if(cnt[x]<2){ok=false;break;}
        }
        if(ok) ans=true;
    }
    if(ans) cout<<"Yes"<<lb;
    else cout<<"No"<<lb;
    
    for(int i=0;i<n;i++) for(auto x:a[i]) cnt[x]--;
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