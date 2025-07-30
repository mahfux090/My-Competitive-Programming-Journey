#include<bits/stdc++.h>

using namespace std;

void slv() {
    int n, k, m;
    cin >> n >> k >> m;
    string s;
    cin >> s;

    string hm = "";
    set<char> st;
    int original_n = n;

    for (char ch : s) {
        if (ch - 'a' < k) {
            st.insert(ch);
            if (st.size() == k) {
                n--;
                st.clear();
                hm += ch;
            }
        }
        if (n == 0) {
            break;
        }
    }

    if (n > 0) {
        cout << "NO\n";
        char mis = 'a';
        while (st.count(mis)) {
            mis++;
        }
        hm += mis;
        while (hm.length() < original_n) {
            hm += 'a';
        }
        cout << hm << "\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        slv();
    }
    // Solved By Mahfuz Uddin
}