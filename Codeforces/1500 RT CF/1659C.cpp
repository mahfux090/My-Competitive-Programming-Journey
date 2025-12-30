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

struct Line {
    ll m, c;
    ll eval(ll x) { return m * x + c; }
};

bool bad(const Line& l1, const Line& l2, const Line& l3) {
    return (__int128)(l3.c - l1.c) * (l1.m - l2.m) <= (__int128)(l2.c - l1.c) * (l1.m - l3.m);
}

void solve() {
    int n;
    ll a, b;
    cin >> n >> a >> b;
    vector<ll> x(n + 1);
    for(int i=1; i<=n; i++) cin >> x[i];
    
    vector<ll> p(n + 1, 0);
    for(int i=1; i<=n; i++) p[i] = p[i-1] + x[i];

    vector<ll> dp(n + 1, 0);
    deque<Line> dq;

    dq.push_back({0, 0}); 

    ll ans = LINF;
    
    ans = min(ans, b * p[n]); 

    for(int i=1; i<=n; i++) {
        ll curX = b * i;
        while(dq.size() >= 2 && dq[0].eval(curX) >= dq[1].eval(curX)) {
            dq.pop_front();
        }
        
        ll bestPrev = dq.front().eval(curX);
        dp[i] = bestPrev + b * p[i] + a * x[i];
        
        ll currentTotal = dp[i] + b * (p[n] - p[i]) - b * (n - i) * x[i];
        ans = min(ans, currentTotal);

        Line newLine = {-x[i], dp[i] - b * p[i] + b * i * x[i] - a * x[i]};
        while(dq.size() >= 2 && bad(dq[dq.size()-2], dq.back(), newLine)) {
            dq.pop_back();
        }
        dq.push_back(newLine);
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