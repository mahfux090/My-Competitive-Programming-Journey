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
    int n,m,x,y;
    cin>>n>>m>>x>>y;

    bool c1=false;
    if((n-1)%x==0 && (m-1)%y==0){
        c1=true;
    }

    bool c2=false;
    if(n>1 && m>1){
        if((n-2)%x==0 && (m-2)%y==0){
            c2=true;
        }
    }

    if(c1||c2){
        cout<<"Chefirnemo"<<lb;
    }else{
        cout<<"Pofik"<<lb;
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