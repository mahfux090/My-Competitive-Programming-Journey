#include<bits/stdc++.h>

using namespace std;

void slv() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >>a[i];
    }

    long long ans = 0;
    for (int i=0; i<n-1; i++) {
        ans+=abs(a[i+1] - a[i]) - 1;
    }

    cout << ans << "\n";
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