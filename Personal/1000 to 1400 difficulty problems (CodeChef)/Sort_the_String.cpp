#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        
        int cnt = 0;
        for (int i = 0; i + 1 < n; ++i) {
            if (s[i] == '1' && s[i + 1] == '0') {
                ++cnt;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
