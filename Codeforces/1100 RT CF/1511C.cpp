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
    int n, q;
    cin>>n>>q;
    vector<int> a(n);
    int p[55];
    memset(p, -1, sizeof(p));
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(p[a[i]] == -1) p[a[i]] = i;
    }
    
    vector<int> v; 
    vector<int> r; 
    
    while(q--) {
        int x;
        cin>>x;
        int idx = -1;
        for(int i=0; i<sz(v); i++) {
            if(v[i]==x) {
                idx=i;
                break;
            }
        }
        
        if(idx != -1) {
            cout<<idx+1<<" ";
            v.erase(v.begin()+idx);
            v.insert(v.begin(), x);
        } else {
            int org = p[x];
            int cnt = 0;
            for(int k : r) {
                if(k < org) cnt++;
            }
            cout << (org - cnt + sz(v) + 1) << " ";
            v.insert(v.begin(), x);
            r.pb(org);
        }
    }
    cout<<lb;
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