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

bool chk(vector<int>& a, int x) {
    int l=0, r=sz(a)-1;
    while(l < r) {
        if(a[l] == x) {
            l++;
        } else if(a[r] == x) {
            r--;
        } else if(a[l] != a[r]) {
            return false;
        } else {
            l++;
            r--;
        }
    }
    return true;
}

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    
    int l=0, r=n-1;
    int v1 = -1, v2 = -1;
    
    while(l < r) {
        if(a[l] != a[r]) {
            v1 = a[l];
            v2 = a[r];
            break;
        }
        l++;
        r--;
    }
    
    if(v1 == -1) {
        cout<<"YES"<<lb;
        return;
    }
    
    if(chk(a, v1) || chk(a, v2)) cout<<"YES"<<lb;
    else cout<<"NO"<<lb;
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