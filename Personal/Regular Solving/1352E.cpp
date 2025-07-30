#include<bits/stdc++.h>

using namespace std;

void s() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> c(n + 1, 0);
    for (int i = 0; i<n; i++) {
        cin >>a[i];
        c[a[i]]++;
    }

    int an = 0;
    for (int i = 0; i < n; i++) {
        int sm = 0;
        for (int j = i; j < n; j++) {
            sm += a[j];
            if (i == j) {
                continue;
            }
            if (sm > n) {
                break;
            }
            if (c[sm] > 0) {
                an += c[sm];
                c[sm] = 0;
            }
        }
    }
    cout << an << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        s();
    }
    // Solved By Mahfuz Uddin
}