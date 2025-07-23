// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>

using namespace std;

using ll = long long;

const int MAXN = 200005;

struct Node {
    ll s0, s1;
    bool f0, f1;
};

int n;
ll k;
ll a[MAXN], b[MAXN];
Node tree[4 * MAXN];

void merge(Node& res, const Node& l, const Node& r) {
    res.s0 = l.s0 + (l.f0 ? r.s1 : r.s0);
    res.f0 = l.f0 ? r.f1 : r.f0;
    res.s1 = l.s1 + (l.f1 ? r.s1 : r.s0);
    res.f1 = l.f1 ? r.f1 : r.f0;
}

void set_leaf(int v, int idx) {
    if (a[idx] + k < b[idx]) {
        tree[v].s0 = b[idx];
        tree[v].f0 = true;
    } else {
        tree[v].s0 = a[idx];
        tree[v].f0 = false;
    }

    if (b[idx] + k < a[idx]) {
        tree[v].s1 = a[idx];
        tree[v].f1 = false;
    } else {
        tree[v].s1 = b[idx];
        tree[v].f1 = true;
    }
}

void build(int v, int tl, int tr) {
    if (tl == tr) {
        set_leaf(v, tl);
    } else {
        int tm = tl + (tr - tl) / 2;
        build(v * 2, tl, tm);
        build(v * 2 + 1, tm + 1, tr);
        merge(tree[v], tree[v * 2], tree[v * 2 + 1]);
    }
}

void update(int v, int tl, int tr, int pos) {
    if (tl == tr) {
        set_leaf(v, pos);
    } else {
        int tm = tl + (tr - tl) / 2;
        if (pos <= tm) {
            update(v * 2, tl, tm, pos);
        } else {
            update(v * 2 + 1, tm + 1, tr, pos);
        }
        merge(tree[v], tree[v * 2], tree[v * 2 + 1]);
    }
}

void solve() {
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) cin >> b[i];

    build(1, 1, n);

    int q;
    cin >> q;
    while (q--) {
        int t, p;
        ll z;
        cin >> t >> p >> z;
        if (t == 1) {
            a[p] = z;
        } else {
            b[p] = z;
        }
        update(1, 1, n, p);
        cout << tree[1].s0 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
// Solved By Mahfuz Uddin
// Wed Jul 23 20:49:46 2025 +0600