#include<bits/stdc++.h>

using namespace std;

void slv() {
    int n, m;
    cin >> n >> m;

    int r = (n + 1) / 2;
    int c = (m + 1) / 2;

    cout << r * c << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        slv();
    }
// Solved By Mahfuz Uddin
}