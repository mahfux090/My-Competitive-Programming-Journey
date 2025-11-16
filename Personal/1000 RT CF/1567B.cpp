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

const int N = 3e5 + 5;
int x[N];

void pre() {
    x[0] = 0;
    for (int i = 1; i < N; i++) {
        x[i] = x[i - 1] ^ i;
    }
}

void solve() {
    int a,b;
    cin >> a >> b;
    
    int c = x[a - 1];
    int d = c ^ b;
    
    if (d == 0) {
        cout << a << lb;
    } else if (d == a) {
        cout << a + 2 << lb;
    } else {
        cout << a + 1 << lb;
    }
}

int main() {
    fast
    pre();
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