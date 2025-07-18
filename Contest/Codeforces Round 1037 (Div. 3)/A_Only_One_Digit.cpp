#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x; 
        
        int min_digit = 9;
        
        while (x > 0) {
            int digit = x % 10;
            min_digit = min(min_digit, digit); 
            x /= 10; 
        }
        
        cout << min_digit << '\n';
    }
    
    return 0;
}