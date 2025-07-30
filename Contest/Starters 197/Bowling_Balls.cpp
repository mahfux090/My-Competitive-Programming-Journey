#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin>> n >>x >> y;
        int c=0;
        for (int i=0; i < n; ++i) {
            int a;
            cin >> a;
            if (a >= x && a<=y) {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
// Solved By Mahfuz Uddin