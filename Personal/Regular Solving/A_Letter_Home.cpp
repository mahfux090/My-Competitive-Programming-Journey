// Author: Mahfuz Uddin
// Problem: $PROBLEM$
// URL: $URL$
// Date: $DATE$
// Language: C++
//Start from here......
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
void solve(){
    short n, s;
    cin >> n >> s;
    vector<short> x(n);
    for(short i=0; i<n; i++){
        cin >> x[i];
    }
    short cost1 = abs(s - x[0]) + (x[n-1] - x[0]);
    short cost2 = abs(s - x[n-1]) + (x[n-1] - x[0]);
    cout << min(cost1, cost2) << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    short t;
    cin >> t;
    while(t--){
        solve();
    }
    // Solved By Mahfuz Uddin
    // Sat Jul 26 21:21:18 2025
    return 0;
}