// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        
        int z1 = 0;
        int z2 = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i] == '0') {
                z1++;
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (b[i] == '0') {
                z2++;
            }
        }
        
        if (z1 == z2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
// Solved By Mahfuz Uddin