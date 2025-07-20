#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), prefMin(n), suffMax(n);
        for(int i = 0; i < n; ++i) cin >> a[i];

        prefMin[0] = a[0];
        for(int i = 1; i < n; ++i)
            prefMin[i] = min(prefMin[i - 1], a[i]);

        suffMax[n - 1] = a[n - 1];
        for(int i = n - 2; i >= 0; --i)
            suffMax[i] = max(suffMax[i + 1], a[i]);

        string res = "";
        for(int i = 0; i < n; ++i) {
            if(a[i] == prefMin[i] || a[i] == suffMax[i])
                res += '1';
            else res += '0';
        }

        cout << res << '\n';
    }

    return 0;
}
