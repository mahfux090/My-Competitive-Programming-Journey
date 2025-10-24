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
    int k;
    cin >> k;
    string s;
    cin >> s;
    deque<char> q;
    q.pb(s[0]);
    for(int i=1; i<k; i++){
        if(k%2){
            if(i%2) q.push_front(s[i]);
            else q.pb(s[i]);
        }
        else{
            if(i%2) q.pb(s[i]);
            else q.push_front(s[i]);
        }
    }
    for(char c:q) cout<<c;
    cout << lb;
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
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//