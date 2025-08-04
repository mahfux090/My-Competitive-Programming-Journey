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
    cin>>n;
    ll d[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>d[i][j];
        }
    }
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    reverse(all(x));
    vector<ll> ans;
    for(int k=0;k<n;k++){
        int vk=x[k];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                d[i][j]=min(d[i][j],d[i][vk]+d[vk][j]);
            }
        }
        ll sum=0;
        for(int i=0;i<=k;i++){
            for(int j=0;j<=k;j++){
                sum+=d[x[i]][x[j]];
            }
        }
        ans.pb(sum);
    }
    reverse(all(ans));
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main() {
    fast
    int t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          Mahfuz Uddin                  //
//------------------------------------------//