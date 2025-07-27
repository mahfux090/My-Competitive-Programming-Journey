// Author: Mahfuz Uddin
// Date: 2025-07-27 21:05
// Language: C++
//start From Here.....
// Bismillah hir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct DataStructure {
    int sz;
    vector<ll> tree;
    explicit DataStructure(int _n) : sz(_n), tree(4 * _n + 4, (ll)4e18) {}

    void modify(int v, int tl, int tr, int pos, ll val) {
        if (tl == tr) {
            tree[v] = val;
            return;
        }
        int tm = (tl + tr) >> 1;
        if (pos <= tm) modify(v << 1, tl, tm, pos, val);
        else modify(v << 1 | 1, tm + 1, tr, pos, val);
        tree[v] = min(tree[v << 1], tree[v << 1 | 1]);
    }

    ll get(int v, int tl, int tr, int l, int r) {
        if (l > r) return (ll)4e18;
        if (l <= tl && tr <= r) return tree[v];
        int tm = (tl + tr) >> 1;
        ll res = (ll)4e18;
        if (l <= tm) res = min(res, get(v << 1, tl, tm, l, r));
        if (r > tm) res = min(res, get(v << 1 | 1, tm + 1, tr, l, r));
        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> arr(n + 1);
        for (int i = 1; i <= n; ++i) cin >> arr[i];
        
        DataStructure ds(n);
        vector<char> active(n + 1, true);
        for (int i = 1; i <= n; ++i) ds.modify(1, 1, n, i, arr[i]);
        
        priority_queue<int> heap;
        for (int i = 1; i <= n; ++i) heap.push(i);
        
        bool possible = true;
        while (!heap.empty()) {
            int curr_idx = heap.top();
            heap.pop();
            
            if (!active[curr_idx]) continue;
            
            ll val = arr[curr_idx];
            ll min_val = (curr_idx > 1) ? ds.get(1, 1, n, 1, curr_idx - 1) : (ll)4e18;
            
            if (curr_idx > 1 && min_val * 2 <= val) {
                possible = false;
                break;
            }
            
            ll reduction = (curr_idx > 1) ? min(min_val, val) : val;
            val -= reduction;
            
            if (val > 0) {
                arr[curr_idx] = val;
                ds.modify(1, 1, n, curr_idx, val);
                heap.push(curr_idx);
            } else {
                active[curr_idx] = false;
                ds.modify(1, 1, n, curr_idx, (ll)4e18);
            }
        }
        cout << (possible ? "YES\n" : "NO\n");
    }
    return 0;
}
// Solved By Mahfuz Uddin