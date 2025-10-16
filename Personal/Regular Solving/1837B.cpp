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

    int max_l=0;
    int max_g=0;
    int cur_l=0;
    int cur_g=0;

    for(char c:s){
        if(c=='<'){
            cur_l++;
            cur_g=0;
        } else{
            cur_g++;
            cur_l=0;
        }
        max_l=max(max_l, cur_l);
        max_g=max(max_g, cur_g);
    }
    cout<<max(max_l, max_g) + 1<<lb;
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