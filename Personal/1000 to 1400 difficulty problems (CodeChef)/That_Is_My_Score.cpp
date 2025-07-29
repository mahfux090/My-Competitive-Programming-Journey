#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int max_scr[12] = {0};
        for (int i = 0; i < n; i++) {
            int p, s;
            cin >> p >> s;
            if (p <= 8) {
                if (s > max_scr[p]) {
                    max_scr[p] = s;
                }
            }
        }
        int total = 0;
        for (int i=1; i<=8; i++) {
            total+=max_scr[i];
        }
        cout << total << endl;
    }
    return 0;
}
// Solved By Mahfuz Uddin