#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<vector<int>> perms;
    if (N <= 4) {
        vector<int> v(N);
        for (int i = 0; i < N; i++) v[i] = i + 1;
        do {
            perms.push_back(v);
        } while (next_permutation(v.begin(), v.end()));
    } else {
        int b = 0;
        while ((1 << b) < N) b++;
        for (int i = 0; i < b; i++) {
            vector<int> g0, g1;
            for (int x = 1; x <= N; x++) {
                if (((x >> i) & 1)) g1.push_back(x);
                else g0.push_back(x);
            }
            sort(g0.begin(), g0.end());
            sort(g1.begin(), g1.end());
            {
                vector<int> p;
                p.reserve(N);
                for (int x : g0) p.push_back(x);
                for (int x : g1) p.push_back(x);
                perms.push_back(p);
            }
            {
                vector<int> p;
                p.reserve(N);
                for (int x : g1) p.push_back(x);
                for (int x : g0) p.push_back(x);
                perms.push_back(p);
            }
            {
                vector<int> p;
                p.reserve(N);
                for (int j = (int)g0.size() - 1; j >= 0; j--) p.push_back(g0[j]);
                for (int j = (int)g1.size() - 1; j >= 0; j--) p.push_back(g1[j]);
                perms.push_back(p);
            }
            {
                vector<int> p;
                p.reserve(N);
                for (int j = (int)g1.size() - 1; j >= 0; j--) p.push_back(g1[j]);
                for (int j = (int)g0.size() - 1; j >= 0; j--) p.push_back(g0[j]);
                perms.push_back(p);
            }
        }
    }
    int M = perms.size();
    cout << M << "\n";
    for (auto &p : perms) {
        for (int i = 0; i < N; i++) {
            cout << p[i] << (i + 1 < N ? ' ' : '\n');
        }
    }
    return 0;
}

// Solved By Mahfuz Uddin