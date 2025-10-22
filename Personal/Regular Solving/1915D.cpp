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
    string s;
    cin>>s;
    string ans="";
    int i=n-1;
    while(i>=0){
        char c=s[i];
        if(c=='a'||c=='e'){
            ans+=s[i];
            ans+=s[i-1];
            if(i-2>=0)ans+='.';
            i-=2;
        } else {
            ans+=s[i];
            ans+=s[i-1];
            ans+=s[i-2];
            if(i-3>=0)ans+='.';
            i-=3;
        }
    }
    reverse(all(ans));
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
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//