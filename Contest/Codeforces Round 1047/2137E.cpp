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

tuple<vector<int>, int, ll> step_full(int n, const vector<int>& a) {
    vector<int> c(n + 1, 0);
    for (int x : a) {
        if (x <= n) c[x]++;
    }
    int m = 0;
    while (m <= n && c[m] > 0) {
        m++;
    }
    vector<int> u;
    ll s_u = 0;
    for (int i = 0; i < m; ++i) {
        if (c[i] == 1) {
            u.pb(i);
            s_u += i;
        }
    }
    ll next_s = s_u + (ll)(n - u.size()) * m;
    return {u, m, next_s};
}

tuple<vector<int>, int, ll> step_cond(int n, const vector<int>& u_p, int m_p) {
    vector<bool> s(n + 2, false);
    for (int x : u_p) s[x] = true;
    s[m_p] = true;
    int m_c = 0;
    while (m_c <= n + 1 && s[m_c]) {
        m_c++;
    }
    
    vector<int> u_c;
    ll s_u_c = 0;
    
    for (int x : u_p) {
        if (x < m_c) {
            u_c.pb(x);
            s_u_c += x;
        }
    }
    if ((n - u_p.size()) == 1 && m_p < m_c) {
        u_c.pb(m_p);
        s_u_c += m_p;
        sort(all(u_c));
    }

    ll next_s = s_u_c + (ll)(n - u_c.size()) * m_c;
    return {u_c, m_c, next_s};
}

void solve() {
    int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    auto [u0, m0, s1] = step_full(n, a);

    if (k == 1) {
        cout << s1 << lb;
        return;
    }

    vector<ll> s_h;
    s_h.pb(0);
    s_h.pb(s1);

    map<pair<vector<int>, int>, int> h;

    vector<int> u_curr = u0;
    int m_prev = m0;

    for (int t = 2; t <= k; ++t) {
        h[{u_curr, m_prev}] = t - 1;
        
        auto [u_next, m_curr, s_next] = step_cond(n, u_curr, m_prev);
        
        s_h.pb(s_next);
        u_curr = u_next;
        m_prev = m_curr;

        if (h.count({u_curr, m_prev})) {
            int p_t = h[{u_curr, m_prev}];
            int c_l = t - p_t;
            ll r_k = k - t;
            int idx = r_k % c_l;
            cout << s_h[p_t + idx] << lb;
            return;
        }
    }

    cout << s_h.back() << lb;
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