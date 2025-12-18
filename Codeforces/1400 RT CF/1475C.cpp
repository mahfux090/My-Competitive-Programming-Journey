#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0);
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
int a,b,k;cin>>a>>b>>k;
vector<int> x(k),y(k);
vector<int> c1(a+1,0),c2(b+1,0);
for(int i=0;i<k;i++){
cin>>x[i];
c1[x[i]]++;
}
for(int i=0;i<k;i++){
cin>>y[i];
c2[y[i]]++;
}
ll s=0;
for(int i=0;i<k;i++){
s+=(k-c1[x[i]]-c2[y[i]]+1);
}
cout<<s/2<<lb;
}
int main(){
fast
int t=1;
cin>>t;
while(t--){
solve();
}
return 0;
}