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
#define pll pair<ll,pll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    int n;
    cin>>n;
    vector<int> p(n+1); 
    for(int i=1;i<=n;i++){
        int v; cin>>v;
        p[v]=i;
    }

    int m=n/2;
    int k=0; 

    if(n%2!=0){ 
        int l=(n+1)/2;
        int r=(n+1)/2;
        while(l>1 && p[l-1]<p[l] && p[r]<p[r+1]){
            k++;
            l--;
            r++;
        }
        cout<<m-k<<lb;
    } else {
        int l=n/2;
        int r=n/2+1;
       
        if(p[l]<p[r]){
            k=1; 
            while(l>1 && p[l-1]<p[l] && p[r]<p[r+1]){
                k++;
                l--;
                r++;
            }
        }
        cout<<m-k<<lb;
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