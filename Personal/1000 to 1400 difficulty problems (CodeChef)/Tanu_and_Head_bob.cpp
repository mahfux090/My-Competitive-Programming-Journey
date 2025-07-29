#include<bits/stdc++.h>

using namespace std;

void slv() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool in = false;
    for(int i=0; i<n; i++) {
        if(s[i] == 'I') {
            in = true;
            break;
        }
    }
    if(in) {
        cout << "INDIAN\n";
        return;
    }
    bool nt_in = false;
    for(int i=0; i<n; i++) {
        if(s[i] == 'Y') {
            nt_in=true;
            break;
        }
    }
    if (nt_in) {
        cout << "NOT INDIAN\n";
    } else {
        cout << "NOT SURE\n";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        slv();
    }
// Solved By Mahfuz Uddin
}