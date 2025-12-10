#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int s = n + 1;
    int t = n + 1;
    int penalty = 0;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        
        if (s > t) swap(s, t);
        
        if (x <= s) {
            s = x;
        } else if (x <= t) {
            t = x;
        } else {
            s = x;
            penalty++;
        }
    }
    
    cout << penalty << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}