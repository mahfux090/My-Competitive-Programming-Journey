#include<bits/stdc++.h>

using namespace std;

void sl() {
    int n, k;
    cin >> n >> k;
    
    long long cost = 0;
    
    for(int i=0; i<n; ++i) {
        int t, d;
        cin>>t>>d;
        
        if (k > 0) {
            int free_t = min(t, k);
            k -= free_t;
            t -= free_t;
        }
        
        cost += (long long)t * d;
    }
    
    cout << cost << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while(tc--) {
        sl();
    }
    return 0;
}

// Solved By Mahfuz Uddin