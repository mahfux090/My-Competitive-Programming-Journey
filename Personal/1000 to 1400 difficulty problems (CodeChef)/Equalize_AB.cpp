#include<bits/stdc++.h>

using namespace std;

void slv() {
    long long a, b, x;
    cin >> a >>b >> x;
    long long d = abs(a-b);
    if(d % (2*x) == 0) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
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