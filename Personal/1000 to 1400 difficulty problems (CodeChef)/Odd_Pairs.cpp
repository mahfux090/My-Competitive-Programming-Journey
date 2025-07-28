// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    long long even_count = n / 2;
    long long odd_count = n - even_count;
    
    long long result = 2 * even_count * odd_count;
    
    cout << result << "\n";
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
// Solved By Mahfuz Uddin