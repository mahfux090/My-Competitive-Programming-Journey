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
    int n, k;
    cin>>n >>k;
    string s;
    cin >> s;
    vector<int> v(k, -1);
    for(int i=0; i<n; i++){
        if(s[i]=='?') continue;
        int cur = s[i]-'0';
        if(v[i%k]!=-1 && v[i%k]!=cur){
            cout<<"NO"<<lb;
            return;
        }
        v[i%k]=cur;
    }
    int c0=0, c1=0;
    for(int i=0;i<k;i++){
        if(v[i]==0) c0++;
        else if(v[i]==1) c1++;
    }
    if(c0<=k/2 && c1<=k/2) cout << "YES" << lb;
    else cout<<"NO"<<lb;
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