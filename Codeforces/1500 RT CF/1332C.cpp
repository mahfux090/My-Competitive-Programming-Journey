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
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int ans=0;
    for(int i=0; i<(k+1)/2; i++){
        int cnt[26]={0};
        int tot=0;
        for(int j=i; j<n; j+=k){
            cnt[s[j]-'a']++;
            tot++;
        }
        if(i != k-1-i){
            for(int j=k-1-i; j<n; j+=k){
                cnt[s[j]-'a']++;
                tot++;
            }
        }
        int mx=0;
        for(int j=0; j<26; j++) mx=max(mx,cnt[j]);
        ans += tot-mx;
    }
    cout<<ans<<lb;
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