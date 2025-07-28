#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>> n;
    if (n<= 1) {
        cout << n << endl;
        return 0;
    }
    vector<int> x(n),h(n);
    for (int i=0;i<n;i++) {
        cin >> x[i] >> h[i];
    }
    int c=1;
    int lp=x[0];
    for(int i=1;i<n-1;i++) {
        if (x[i]-h[i]>lp) {
            c++;
            lp=x[i];
        } else if (x[i]+h[i]<x[i+1]) {
            c++;
            lp=x[i]+h[i];
        } else {
            lp=x[i];
        }
    }
    c++;
    cout<<c<<endl;
    return 0;
}
// Solved By Mahfuz Uddin