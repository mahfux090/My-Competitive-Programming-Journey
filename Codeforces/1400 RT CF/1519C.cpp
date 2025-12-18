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
int n;cin>>n;
vector<int> u(n);
for(int i=0;i<n;i++)cin>>u[i];
vector<vector<ll>> v(n+1);
for(int i=0;i<n;i++){
ll s;cin>>s;
v[u[i]].pb(s);
}
for(int i=1;i<=n;i++)sort(rall(v[i]));
vector<vector<ll>> p(n+1,vector<ll>(1,0));
for(int i=1;i<=n;i++){
for(ll x:v[i])p[i].pb(p[i].back()+x);
}
vector<ll> r(n+1,0);
for(int i=1;i<=n;i++){
int m=sz(v[i]);
for(int k=1;k<=m;k++){
int c=m-(m%k);
r[k]+=p[i][c];
}
}
for(int i=1;i<=n;i++)cout<<r[i]<<(i==n?"":" ");
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