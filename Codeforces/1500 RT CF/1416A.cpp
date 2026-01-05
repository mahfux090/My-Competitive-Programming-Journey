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
    vector<int> a(n);
    vector<int> lst(n+1, 0);
    vector<int> g(n+1, 0);
    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        a[i-1]=x;
        g[x]=max(g[x], i-lst[x]);
        lst[x]=i;
    }
    for(int i=1;i<=n;i++){
        g[i]=max(g[i], n+1-lst[i]);
    }
    vector<int> res(n+1, INF);
    for(int i=1; i<=n; i++){
        if(g[i]<=n){
            res[g[i]]=min(res[g[i]], i);
        }
    }
    for(int i=2; i<=n; i++) res[i]=min(res[i], res[i-1]);
    for(int i=1;i<=n;i++){
        if(res[i]==INF) cout<<-1<<" ";
        else cout<<res[i]<<" ";
    }
    cout<<lb;
}

int main() {
    fast
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}#include<bits/stdc++.h>
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
    vector<int> a(n);
    vector<int> lst(n+1, 0);
    vector<int> g(n+1, 0);
    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        a[i-1]=x;
        g[x]=max(g[x], i-lst[x]);
        lst[x]=i;
    }
    for(int i=1;i<=n;i++){
        g[i]=max(g[i], n+1-lst[i]);
    }
    vector<int> res(n+1, INF);
    for(int i=1; i<=n; i++){
        if(g[i]<=n){
            res[g[i]]=min(res[g[i]], i);
        }
    }
    for(int i=2; i<=n; i++) res[i]=min(res[i], res[i-1]);
    for(int i=1;i<=n;i++){
        if(res[i]==INF) cout<<-1<<" ";
        else cout<<res[i]<<" ";
    }
    cout<<lb;
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