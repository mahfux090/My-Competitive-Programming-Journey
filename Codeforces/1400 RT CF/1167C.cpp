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

const int MX=500005;
int p[MX],s[MX];

int f(int x){
    if(p[x]==x) return x;
    return p[x]=f(p[x]);
}

void un(int a,int b){
    a=f(a); b=f(b);
    if(a!=b){
        if(s[a]<s[b]) swap(a,b);
        p[b]=a;
        s[a]+=s[b];
    }
}

void solve() {
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        p[i]=i; s[i]=1;
    }
    while(m--){
        int k; cin>>k;
        if(k==0) continue;
        int u; cin>>u;
        for(int i=1;i<k;i++){
            int v; cin>>v;
            un(u,v);
        }
    }
    for(int i=1;i<=n;i++){
        cout<<s[f(i)]<<" ";
    }
    cout<<lb;
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