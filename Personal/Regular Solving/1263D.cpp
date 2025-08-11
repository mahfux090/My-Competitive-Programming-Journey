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

vector<int> p;

int find_s(int v) {
    if (v == p[v]) return v;
    return p[v] = find_s(p[v]);
}

void unite_s(int a, int b) {
    a = find_s(a);
    b = find_s(b);
    if (a != b)
        p[b] = a;
}

void solve() {
    int n;
    cin >> n;
    p.assign(26, 0);
    iota(all(p), 0);
    
    vector<bool> seen(26, false);
    for (int i=0; i<n; ++i) {
        string s;
        cin>>s;
        int first_char = -1;
        for (char c : s) {
            int cur = c - 'a';
            seen[cur] = true;
            if (first_char == -1) {
                first_char = cur;
            } else {
                unite_s(first_char, cur);
            }
        }
    }

    set<int> groups;
    for (int i=0; i<26; ++i) {
        if (seen[i]) {
            groups.insert(find_s(i));
        }
    }
    cout << sz(groups) << lb;
}

int main() {
    fast
    int t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//