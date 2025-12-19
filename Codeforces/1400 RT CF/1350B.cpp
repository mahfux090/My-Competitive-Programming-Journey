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

void solve(){
    int n;cin>>n;
    vector<int>s(n+1);
    vector<int>d(n+1,1);
    for(int i=1;i<=n;i++)cin>>s[i];
    for(int i=1;i<=n;i++){
        for(int j=i*2;j<=n;j+=i){
            if(s[j]>s[i]){
                d[j]=max(d[j],d[i]+1);
            }
        }
    }
    int m=0;
    for(int i=1;i<=n;i++)m=max(m,d[i]);
    cout<<m<<lb;
}

int main(){
    fast
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}