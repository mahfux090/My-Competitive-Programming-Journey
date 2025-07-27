// Author: Mahfuz Uddin
// Date: 2025-07-27 11:33
// Language: C++
//start From Here.....
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    int l = -1, r = -1;
    for(int i = 0; i < n; ++i){
        if(a[i] != b[i]){
            if(l == -1){
                l = i;
            }
            r = i;
        }
    }
    if(l == -1){
        cout << "yes\n1 1\n";
    } else {
        reverse(a.begin() + l, a.begin() + r + 1);
        bool ok = true;
        for(int i = 0; i < n; ++i){
            if(a[i] != b[i]){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << "yes\n" << l + 1 << " " << r + 1 << "\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}
// Solved By Mahfuz Uddin
