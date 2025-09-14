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
    vector<int> v;
    map<int,int> mp;
    for(int i=0; i<n; ++i) {
        int a;
        cin>>a;
        if(mp[a%10]<3){
            v.pb(a % 10);
            mp[a%10]++;
        }
    }

    bool ok=false;
    int s=sz(v);
    for(int i=0; i<s; i++){
        for (int j=i+1; j<s; j++){
            for(int k=j+1; k<s; k++){
                if((v[i]+v[j]+v[k])%10==3){
                    ok=true;
                    break;
                }
            }
            if(ok) break;
        }
        if (ok) break;
    }

    if(ok) cout<<"YES"<<lb;
    else cout << "NO" << lb;
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