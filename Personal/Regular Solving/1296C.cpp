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

    map<pii, int> mp;
    mp[{0,0}] = 0;
    int x=0, y=0;
    int min_len = INF;
    int l=-1, r=-1;

    for(int i=0; i<n; ++i){
        if(s[i]=='L') x--;
        else if(s[i]=='R') x++;
        else if(s[i]=='U') y++;
        else if(s[i]=='D') y--;

        if(mp.count({x,y})){
            int prev_idx = mp[{x,y}];
            if(i - prev_idx + 1 < min_len){
                min_len = i - prev_idx + 1;
                l = prev_idx + 1;
                r = i + 1;
            }
        }
        mp[{x,y}] = i + 1;
    }

    if(l==-1){
        cout<<-1<<lb;
    } else {
        cout<<l<<" "<<r<<lb;
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