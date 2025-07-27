#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    
    int even_count = 0, odd_count = 0;
    for(int i=0; i<n; i++) {
        if(a[i] % 2 == 0) even_count++;
        else odd_count++;
    }

    bool majority_even = (even_count > odd_count);
    for(int i=0; i<n; i++) {
        if(majority_even && (a[i] % 2 != 0)) {
            cout << i+1 << "\n";
            break;
        }
        if(!majority_even && (a[i] % 2 == 0)) {
            cout << i+1 << "\n";
            break;
        }
    }

    return 0;
}
// Author: Mahfuz Uddin
// Date: 2025-07-27 11:31
// Language: C++

