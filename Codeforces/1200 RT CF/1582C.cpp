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
    cin >> n;
    string s;
    cin >> s;
    int ans = INF;
    for(char c='a'; c<='z'; c++){
        int l=0, r=n-1;
        int cnt=0;
        bool ok=true;
        while(l < r){
            if(s[l] == s[r]){
                l++; r--;
            }
            else if(s[l] == c){
                cnt++; l++;
            }
            else if(s[r] == c){
                cnt++; r--;
            }
            else{
                ok=false; break;
            }
        }
        if(ok) ans = min(ans,cnt);
    }
    if(ans == INF) cout<<-1<<lb;
    else cout<<ans<<lb;
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