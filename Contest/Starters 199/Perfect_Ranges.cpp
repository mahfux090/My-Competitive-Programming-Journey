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
    cin >> n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        cin>>b[i];
    }
    
    ll ans = 0;
    for(int i=0;i<n;i++){
        set<int> cur;
        cur.insert(a[i]);
        cur.insert(b[i]);
        ans++;

        for(int j=i+1; j<n; j++){
            set<int> next_s;
            int m_j = min(a[j], b[j]);
            int M_j = max(a[j], b[j]);
            
            bool possible = false;
            for(int val : cur){
                if(m_j > val) {
                    next_s.insert(m_j);
                    possible=true;
                }
                if(M_j > val) {
                    next_s.insert(M_j);
                    possible=true;
                }
            }

            if(!possible){
                break;
            }
            cur = next_s;
            ans++;
        }
    }
    cout << ans << lb;
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