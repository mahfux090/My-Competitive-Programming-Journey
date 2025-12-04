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
    ll a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<lb;
        return;
    }
    if(a>b) swap(a,b);
    if(b%a!=0){
        cout<<-1<<lb;
        return;
    }
    ll q=b/a;
    if((q&(q-1))!=0){
        cout<<-1<<lb;
        return;
    }
    int k=0;
    while(q>1){
        q/=2;
        k++;
    }
    int ops=(k/3);
    k%=3;
    ops+=(k/2);
    k%=2;
    ops+=k;
    cout<<ops<<lb;
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