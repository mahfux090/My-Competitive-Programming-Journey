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
 void solve() {
  int n;
  cin>>n;
  vector<ll>a(n);
  ll mn=LINF,mx=-LINF;
  for(int i=0;i<n;i++){
   cin>>a[i];
   mn=min(mn,a[i]);
   mx=max(mx,a[i]);
  }
  ll x;
  cin>>x;
  if(x>=mn&&x<=mx){
   cout<<"YES"<<lb;
  }
  else{
   cout<<"NO"<<lb;
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