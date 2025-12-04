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
    cin>>s;

    vector<int> p(n), sf(n);
    int f[26] = {0};
    int c = 0;
    for(int i=0; i<n; i++){
        int ch = s[i]-'a';
        if(f[ch] == 0) c++;
        f[ch]++;
        p[i] = c;
    }

    int f2[26] = {0};
    c=0;
    for(int i=n-1; i>=0; i--){
        int ch=s[i]-'a';
        if(f2[ch]==0) c++;
        f2[ch]++;
        sf[i]=c;
    }

    int ans=0;
    for(int i=0; i<n-1; i++){
        ans=max(ans, p[i] + sf[i+1]);
    }
    cout << ans << lb;
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