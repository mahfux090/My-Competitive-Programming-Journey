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

int s[200005];
void p() {
    for(int i=1; i<=200000; i++) s[i]=i;
    for(int i=2; i*i<=200000; i++) {
        if(s[i]==i) {
            for(int j=i*i; j<=200000; j+=i)
                if(s[j]==j) s[j]=i;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> l, e;
    vector<int> g[n+1];
    vector<bool> u(n+1, 0);
    
    for(int i=1; i<=n; i++) {
        if(i%2==0) continue;
        if(s[i]==i && i > n/2) l.pb(i);
        else if(i==1) l.pb(i);
        else g[s[i]].pb(i);
    }

    vector<int> a;
    for(int i=3; i<=n; i+=2) {
        if(!g[i].empty()) {
            int t = -1;
            for(int j=2*i; j<=n; j+=2*i) {
                if(!u[j]) {
                    t = j;
                    break;
                }
            }
            if(t == -1) {
               for(int x : g[i]) l.pb(x);
            } else {
                u[t] = 1;
                for(int x : g[i]) a.pb(x);
                a.pb(t);
            }
        }
    }

    for(int i=2; i<=n; i+=2) {
        if(!u[i]) e.pb(i);
    }

    vector<int> f;
    int i=0, j=0;
    while(i < sz(e) || j < sz(l)) {
        if(i < sz(e)) f.pb(e[i++]);
        if(j < sz(l)) f.pb(l[j++]);
    }
    
    for(int x : a) f.pb(x);
    
    for(int x : f) cout << x << " ";
    cout << lb;
}

int main() {
    fast
    p();
    int t=1; 
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}