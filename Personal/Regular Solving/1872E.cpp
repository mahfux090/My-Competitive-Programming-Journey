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
    vector<int> a(n);
    int x0=0,x1=0;
    for(int i=0;i<n;i++)cin>>a[i];
    string s;
    cin>>s;
    vector<int> p(n+1,0);
    for(int i=0;i<n;i++){
        p[i+1]=p[i]^a[i];
        if(s[i]=='0')x0^=a[i];
        else x1^=a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            int l,r;
            cin>>l>>r;
            int change=p[r]^p[l-1];
            x0^=change;
            x1^=change;
        }else{
            int g;
            cin>>g;
            if(g==0)cout<<x0<<" ";
            else cout<<x1<<" ";
        }
    }
    cout<<lb;
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