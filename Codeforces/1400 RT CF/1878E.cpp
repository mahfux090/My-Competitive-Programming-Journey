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

const int M = 200005;
const int K = 19;
int st[M][K];
int lg[M];

void pre() {
    lg[1] = 0;
    for(int i=2; i<M; i++) lg[i] = lg[i/2] + 1;
}

void solve() {
    int n;
    cin>> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0; i<n; i++) st[i][0] = a[i];

    for(int j=1; j<K; j++){
        for(int i=0; i + (1 << j) <= n; i++) {
            st[i][j] = st[i][j-1] & st[i + (1 << (j-1))][j-1];
        }
    }

    int q;
    cin >> q;
    while(q--) {
        int l, k;
        cin>>l>>k;
        l--; 

        if(a[l] < k) {
            cout << -1 << " ";
            continue;
        }

        int lo = l, hi = n-1;
        int ans = l;
        
        while(lo <= hi){
            int mid = (lo + hi) / 2;
            int len = mid - l + 1;
            int j = lg[len];
            int val = st[l][j] & st[mid - (1 << j) + 1][j];

            if(val >= k) {
                ans = mid;
                lo=mid+1;
            } else {
                hi=mid-1;
            }
        }
        cout << ans+1 << " ";
    }
    cout << lb;
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