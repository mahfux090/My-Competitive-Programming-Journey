#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        int ev =0;
        for (int i=0; i<n; i++) {
            int a;
            cin >> a;
            if (a % 2 == 0) {
                ev++;
            }
        }
        if (ev == n-1) {
            cout << "Yes" << endl;
        } else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
// Solved By Mahfuz Uddin