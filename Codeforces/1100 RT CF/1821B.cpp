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
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    int l = -1, r = -1;
    for(int i=0; i<n; i++) {
        if(a[i] != b[i]) {
            l = i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--) {
        if(a[i] != b[i]) {
            r = i;
            break;
        }
    }

    while(l > 0 && b[l-1] <= b[l]) {
        l--;
    }
    while(r < n-1 && b[r+1] >= b[r]) {
        r++;
    }

    cout << l + 1 << " " << r + 1 << lb;
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