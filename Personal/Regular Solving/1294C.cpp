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
    ll n;
    cin>>n;
    vector<ll> ans;
    ll tmp = n;
    for(ll i=2; i*i<=tmp; i++){
        if(tmp%i==0){
            ans.pb(i);
            tmp/=i;
            break;
        }
    }
    if(sz(ans)==0){
        cout<<"NO"<<lb;
        return;
    }
    for(ll i=ans[0]+1; i*i<=tmp; i++){
        if(tmp%i==0){
            ans.pb(i);
            tmp/=i;
            break;
        }
    }
    if(sz(ans)<2 || tmp<=ans[1]){
        cout<<"NO"<<lb;
    }else{
        cout<<"YES"<<lb;
        cout<<ans[0]<<" "<<ans[1]<<" "<<tmp<<lb;
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