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
    int n,m;
    cin>>n >> m;
    ll N = 1LL << n;
    vector<ll> sg(2 * N);
    for (int i=0; i<N; ++i) {
        cin >> sg[N+i];
    }
    
    for (int i=N-1;i>0;--i) {
        int level_from_root = 0;
        int temp = i;
        while(temp > 1){
            temp /= 2;
            level_from_root++;
        }
        int level = n - level_from_root;
        if (level % 2 != 0) {
            sg[i] = sg[2 * i] | sg[2 * i+1];
        } else {
            sg[i] = sg[2*i]^sg[2*i+1];
        }
    }
    
    while(m--){
        int p;
        ll b;
        cin>>p>>b;
        ll idx=N+p-1;
        sg[idx]=b;
        
        bool op=true;
        for(idx/=2; idx > 0; idx/=2) {
            if (op) {
                sg[idx]=sg[2*idx]|sg[2*idx+1];
            } else {
                sg[idx]=sg[2*idx]^sg[2*idx+1];
            }
            op = !op;
        }
        cout << sg[1] << endl;
    }
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