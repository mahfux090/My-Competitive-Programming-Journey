#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    string nm[n];
    int scr[n];

    for(int i=0; i<n; i++) {
        cin >> nm[i] >> scr[i];
        m[nm[i]] += scr[i];
    }

    int mx = -10000001;
    for(auto it:m) {
        mx = max(mx, it.second);
    }

    map<string, int> m2;
    string w = "";
    for(int i=0; i<n; i++) {
        m2[nm[i]] += scr[i];
        if(m[nm[i]] == mx && m2[nm[i]] >= mx) {
            w = nm[i];
            break;
        }
    }
    cout << w << endl;

// Solved By Mahfuz Uddin
}