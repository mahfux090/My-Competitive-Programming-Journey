#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t --) {
        int n, x;
        cin>>n >> x;
        int res = x%(n+1);
        cout << res << endl;
    }
    return 0;
}
// Solved By Mahfuz Uddin