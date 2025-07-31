#include<bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> fr(55, 0);
    for (int x: v) {
        fr[x]++;
    }

    long long ans = 0;
    int c = min(fr[0], fr[1]);
    ans += (long long)c * 2;
    fr[0]-=c;
    fr[1] = fr[1] - c;

    ans += fr[0];
    fr[0]=0;

    for (int i = 0; i<55; i++) {
        if (fr[i]>0) {
            ans += (long long)i * fr[i];
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solution();
    }
}
// Solved By Mahfuz Uddin