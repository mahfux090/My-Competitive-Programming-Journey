#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long wd = 1;
    long long wo = 0;
    long long mod = 1000000007;

    for (int i = 1; i<=n; ++i) {
        long long pd = wd;
        wd = wo;
        wo = (3 * pd + 2 * wo) % mod;
    }

    cout<<wd<<endl;

    // Solved By Mahfuz Uddin
    return 0;
}