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

const int M=40005;
int d[M];
vector<int> p;

bool ck(int n){
    string s=to_string(n);
    string r=s;
    reverse(all(r));
    return s==r;
}

void pre(){
    for(int i=1;i<M;++i){
        if(ck(i))p.pb(i);
    }
    memset(d,0,sizeof(d));
    d[0]=1;
    for(int x:p){
        for(int i=x;i<M;++i){
            d[i]+=d[i-x];
            if(d[i]>=MOD)d[i]-=MOD;
        }
    }
}

void solve() {
    int n;
    cin>>n;
    cout<<d[n]<<lb;
}

int main() {
    fast
    pre();
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}