#include<bits/stdc++.h> 
using namespace std;

void solve() { 
    int n; 
    cin >> n; 
    vector<int> p(n); 
    for (int i=0; i<n; i++) { 
        cin >> p[i]; 
    } 

    long long inv = 0; 
    for (int i=0; i < n; i++) { 
        for (int j = i+1; j < n; j++) { 
            if (p[i] > p[j]) { 
                inv++; 
            } 
        } 
    } 

    for (int k=0; k < n; k++) { 
        int l_l = 0; 
        for (int i=0; i<k; i++) { 
            if (p[i] > p[k]) { 
                l_l++; 
            } 
        } 

        int l_r = 0; 
        for (int j = k + 1; j < n; j++) { 
            if (p[j] > p[k]) { 
                l_r++; 
            } 
        } 

        int d = l_r - l_l; 
        if (d<0) { 
            inv+=d; 
        } 
    } 

    cout << inv << "\n "; 
} 

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int t; 
    cin >> t; 
    while (t--) { 
        solve(); 
    } 
} 
// Solved By Mahfuz Uddin