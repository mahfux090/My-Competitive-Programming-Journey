#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int ev=0, od=0;
    for (int i=0; i<n; i++) {
        int val;
        cin>>val;
        if (val%2==0) ev++;
        else od++;
    }

    int ev_pos = n/2;
    int od_pos = n - ev_pos;

    if ((ev==ev_pos && od==od_pos) || (ev==od_pos && od==ev_pos)) {
        cout <<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
