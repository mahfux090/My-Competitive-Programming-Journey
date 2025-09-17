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

unordered_set<int> st;

void precompute(){
    for(ll k=2; k<=1000; k++){
        ll val=1+k+k*k;
        ll p=k*k;
        while(val<=1000000){
            st.insert(val);
            if(1000000/k < p) break;
            p*=k;
            val+=p;
        }
    }
}

void solve() {
    int n;
    cin>>n;
    if(st.count(n)){
        cout<<"YES"<<lb;
    }else{
        cout<<"NO"<<lb;
    }
}

int main() {
    fast
    precompute();
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