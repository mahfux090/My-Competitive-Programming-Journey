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
    vector<int> v = {4, 8, 15, 16, 23, 42};
    int q[4];
    
    cout << "? 1 2" << endl; cin >> q[0];
    cout << "? 2 3" << endl; cin >> q[1];
    cout << "? 3 4" << endl; cin >> q[2];
    cout << "? 4 5" << endl; cin >> q[3];

    do {
        if(v[0]*v[1] == q[0] && v[1]*v[2] == q[1] && 
           v[2]*v[3] == q[2] && v[3]*v[4] == q[3]) {
            cout << "! ";
            for(int i=0; i<6; i++) cout << v[i] << " ";
            cout << endl;
            return;
        }
    } while(next_permutation(all(v)));
}

int main() {
    // fast // Interactive problem, careful with IO buffering
    int t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}