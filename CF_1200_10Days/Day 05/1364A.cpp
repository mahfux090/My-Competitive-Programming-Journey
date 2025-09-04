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
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    ll s=0;
    bool ok = false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%x !=0) ok=true;
        s+=a[i];
    }
    if(!ok){
        cout<<-1<<lb;
        return;
    }
    if(s%x!=0){
        cout << n << lb;
        return;
    }
    int l = -1,r=-1;
    for(int i=0;i<n;++i){
        if(a[i]%x!=0){
            l=i;
            break;
        }
    }
    for(int i=n-1; i>=0;--i){
        if(a[i]%x!=0){
            r = i;
            break;
        }
    }
    cout<<max(n-1-l,r)<<lb;
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