#include<bits/stdc++.h>

using namespace std;

void slv() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    vector<int> df;
    for(int i=0; i<n; i++) {
        if(a[i] != b[i]) {
            df.push_back(i);
        }
    }
    if (df.size()==0) {
        cout << "YES\n";
    } else if (df.size() == 2) {
        if(df[0] + 1 == df[1]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        cout << "NO\n";
    }
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