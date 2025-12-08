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
    vector<int> a(n),b(n);
    vector<int> pos(n+1);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        pos[a[i]]=i;
    }
    
    for(int i=0;i<n;i++) cin>>b[i];
    
    int cnt=0;
    int mn=INF;
    
    for(int i=n-1;i>=0;i--){
        int enter_idx = pos[b[i]];
        if(enter_idx > mn) {
            cnt++;
        }
        mn = min(mn, enter_idx);
    }
    cout<<cnt<<lb;
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