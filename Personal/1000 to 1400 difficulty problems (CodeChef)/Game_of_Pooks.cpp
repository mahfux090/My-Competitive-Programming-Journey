#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n == 3){
        cout<<2<<"\n";
    }
    else if(n == 2){
        cout << 1 << "\n";
    }
    else {
        cout << n << "\n";
    }
}

int main() {
    int t;
    cin>>t;
    while (t --) {
        solve();
    }
    // Solved By Mahfuz Uddin
}