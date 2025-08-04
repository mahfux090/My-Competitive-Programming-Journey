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
#define endl '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    int n;
    cin>>n;
    vector<vector<int>> adj(n+1);
    for (int i=0; i<n-1; ++i) {
        int u, v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vector<int> a(n);
    for(int i=0; i<n; ++i) {
        cin>>a[i];
    }
    
    if (a[0]!=1) {
        cout<<"No"<<endl;
        return;
    }
    
    queue<int> q;
    q.push(1);
    vector<bool> vis(n+1, false);
    vis[1] = true;
    int head = 1;
    
    while(!q.empty()){
        int u = q.front();
        q.pop();
        
        set<int> ch;
        for(int v : adj[u]){
            if(!vis[v]){
                ch.insert(v);
            }
        }
        
        set<int> sc;
        int num_ch = ch.size();
        for(int i=0; i<num_ch; ++i){
            if (head + i < n) {
                sc.insert(a[head + i]);
            }
        }

        if(ch != sc){
            cout << "No" << endl;
            return;
        }

        for (int i=0; i<num_ch; ++i) {
            int child_node = a[head + i];
            vis[child_node] = true;
            q.push(child_node);
        }
        
        head += num_ch;
    }
    
    cout << "Yes" << endl;
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
//          Mahfuz Uddin                    //
//------------------------------------------//