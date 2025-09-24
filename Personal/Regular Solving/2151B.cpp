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
const ll LINF = 4e18; 
const int MOD = 1e9+7;

ll fnw(ll x, map<ll, ll>& B) {
    ll y = x + 1;
    auto it = B.upper_bound(y);
    if (it != B.begin()) {
        auto p_it = prev(it);
        if (y >= p_it->first && y <= p_it->second) {
            return p_it->second + 1;
        }
    }
    return y;
}

bool add(ll p, map<ll, ll>& B) {
    if (p <= 0) return false;
    auto it = B.upper_bound(p);
    if (it != B.begin() && p <= prev(it)->second) {
        return false;
    }

    bool merges_left = (it != B.begin() && prev(it)->second == p - 1);
    bool merges_right = (it != B.end() && it->first == p + 1);

    if (merges_left && merges_right) {
        ll start = prev(it)->first;
        ll end = it->second;
        B.erase(prev(it));
        B.erase(it);
        B[start] = end;
    } else if (merges_left) {
        prev(it)->second++;
    } else if (merges_right) {
        ll end = it->second;
        B.erase(it);
        B[p] = end;
    } else {
        B[p] = p;
    }
    return true;
}

ll sim_ff(const string& s, int len, map<ll, ll>& B, ll start_pos, int start_k) {
    if (start_k >= len) return start_pos;
    ll pos = start_pos;
    int k = start_k;
    while (k < len) {
        auto it = B.upper_bound(pos);
        ll next_black_start = LINF;
        if (it != B.end()) next_black_start = it->first;

        ll dist = next_black_start - pos;
        int steps_rem = len - k;

        if (dist >= steps_rem) {
            pos += steps_rem;
            break;
        }
        
        if (dist > 0) {
            pos += dist;
            k += dist;
        }

        if (k < len) {
            if (s[k] == 'A') pos++;
            else pos = fnw(pos, B);
            k++;
        }
    }
    return pos;
}

void solve() {
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<ll> a(m);
    for(int i=0;i<m;i++) cin>>a[i];

    map<ll, ll> B;
    if (m > 0) {
        sort(all(a));
        ll st = a[0], en = a[0];
        for(int i = 1; i < m; ++i) {
            if (a[i] == en + 1) en = a[i];
            else { B[st] = en; st = a[i]; en = a[i]; }
        }
        B[st] = en;
    }

    bool lwn = true;
    ll lp = -1;
    map<ll, ll> B_prev = B;

    for (int i = 1; i <= n; ++i) {
        ll cp;
        if (!lwn) {
            cp = (s[i-1] == 'A') ? lp + 1 : fnw(lp, B);
            B_prev = B;
        } else {
            if (i == 1) {
                cp = sim_ff(s, i, B, 1, 0);
            } else {
                int k_diverge = -1;
                ll pre_diverge_pos = -1;
                
                ll pos = 1;
                int k = 0;
                while (k < i - 1) {
                    ll last_pos = pos;
                    ll next_pos;
                    if (s[k] == 'A') {
                        next_pos = pos + 1;
                    } else {
                        next_pos = fnw(pos, B_prev);
                    }
                    if (s[k] == 'B' && last_pos < lp && lp <= next_pos) {
                        k_diverge = k;
                        pre_diverge_pos = last_pos;
                        break;
                    }
                    pos = next_pos;
                    k++;
                }

                if (k_diverge == -1) {
                    cp = (s[i-1] == 'A') ? lp + 1 : fnw(lp, B);
                } else {
                    cp = sim_ff(s, i, B, pre_diverge_pos, k_diverge);
                }
            }
            B_prev = B;
        }
        lwn = add(cp, B);
        lp = cp;
    }
    
    vector<ll> final_cells_vec;
    for(auto const& [st, en] : B) {
        for (ll i = st; i <= en; ++i) {
            final_cells_vec.pb(i);
        }
    }

    cout << sz(final_cells_vec) << lb;
    bool first = true;
    for(ll cell : final_cells_vec) {
        if (!first) cout << " ";
        cout << cell;
        first = false;
    }
    cout << lb;
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