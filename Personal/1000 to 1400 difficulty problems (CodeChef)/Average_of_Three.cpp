#include<bits/stdc++.h>

using namespace std;

void sl() {
    int x;
    cin>>x;
    int a1=1;
    int a2=2;
    int a3 = 3 * x-a1-a2;
    cout << a1 << " " << a2 << " " << a3 << "\n";
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