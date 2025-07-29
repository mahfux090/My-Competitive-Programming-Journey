#include<bits/stdc++.h>

using namespace std;

void slv(){
    int x, y, z;
    cin >> x >> y >> z;
    if (x + y == z || x + z == y || y + z == x) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        slv();
    }
// Solved By Mahfuz Uddin
}