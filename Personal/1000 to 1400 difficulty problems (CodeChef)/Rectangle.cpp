#include<bits/stdc++.h>

using namespace std;

void sl() {
    vector<int> v(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    sort(v.begin(), v.end());
    
    if (v[0] == v[1] && v[2] == v[3]) {
        cout << "YES\n";
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
        sl();
    }
    return 0;
}

// Solved By Mahfuz Uddin