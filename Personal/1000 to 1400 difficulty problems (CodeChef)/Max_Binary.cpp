#include<bits/stdc++.h>

using namespace std;

void sl() {
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;

    if (k>0 && s[0]=='0') {
        s[0]='1';
        k--;
    }

    for (int i=0; i<k; i++) {
        s+='0';
    }

    cout << s << "\n";
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