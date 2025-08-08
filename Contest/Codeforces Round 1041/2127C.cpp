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
    ll k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    vector<pll> p(n);
    ll sum = 0;
    for(int i=0; i<n; i++) 
        cin>>a[i];
    for(int i=0; i<n; i++) 
        cin>>b[i];
    for(int i=0; i<n; i++)
    {
        if (a[i] > b[i]) 
            swap(a[i], b[i]);
        sum += (b[i] - a[i]);
        p[i] = {a[i], b[i]};
    }
    sort(all(p));
    bool ov = false;
    ll max_d = -1;
    for(int i=0; i<n; i++)
    {
        if (p[i].ff <= max_d) 
        {
            ov = true;
            break;
        }
        max_d = max(max_d, p[i].ss);
    }

    if(ov)
        cout << sum << lb;
    else 
    {
        ll min_dist = LINF;
        max_d = p[0].ss;
        for (int i=1; i<n; i++) 
        {
            min_dist = min(min_dist, p[i].ff - max_d);
            max_d = max(max_d, p[i].ss);
        }
        cout << sum + 2 * min_dist << lb;
    }
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