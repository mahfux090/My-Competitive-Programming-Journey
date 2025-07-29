#include<bits/stdc++.h>

using namespace std;

void slv() {
    int n;
    cin>> n;
    long long mxv;
    cin >> mxv;
    long long mxd=0;
    for (int i=1; i<n; i++) {
        long long cur;
        cin>>cur;
        if (cur < mxv) {
            mxd = max(mxd, mxv - cur);
        } else {
            mxv = cur;
        }
    }
    int ans = 0;
    while ((1LL << ans) - 1 < mxd) {
        ans++;
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        slv();
    }
// Solved By Mahfuz Uddin
}