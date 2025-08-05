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
    vector<int> a(2*n);
    for(int i=0; i<2*n; i++) cin>>a[i];

    sort(all(a));

    for(int i=0; i<2*n-1; i++){
        multiset<int> ms;
        for(int val: a) ms.insert(val);
        
        vector<pii> res;
        int initial_x = a[2*n-1]+a[i];
        int current_x = a[2*n-1];
        
        res.pb({a[i], a[2*n-1]});
        ms.erase(ms.find(a[i]));
        ms.erase(ms.find(a[2*n-1]));
        
        bool ok = true;
        for(int j=0; j<n-1; j++){
            if(ms.empty()){
                ok = false;
                break;
            }

            int m1 = *ms.rbegin();
            ms.erase(prev(ms.end()));
            
            int m2 = current_x-m1;
            auto it = ms.find(m2);

            if(it == ms.end()){
                ok = false;
                break;
            }
            
            ms.erase(it);
            res.pb({m1, m2});
            current_x = m1;
        }

        if(ok){
            cout << "YES" << endl;
            cout << initial_x << endl;
            for(auto p : res) {
                cout << p.ff << " " << p.ss << endl;
            }
            return;
        }
    }

    cout << "NO" << endl;
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
//          Mahfuz Uddin                  //
//------------------------------------------//