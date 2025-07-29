#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        map<int, int> mp;
        for (int i=0; i < n; i++) {
            int p;
            cin >> p;
            mp[p]++;
        }

        bool ok = true;
        for (auto i : mp) {
            int group_size = i.first;
            int person_count = i.second;
            if (person_count % group_size != 0) {
                ok=false;
                break;
            }
        }

        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
// Solved By Mahfuz Uddin