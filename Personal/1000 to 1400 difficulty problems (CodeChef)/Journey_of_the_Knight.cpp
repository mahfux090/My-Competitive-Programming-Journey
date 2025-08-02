#include<bits/stdc++.h>

using namespace std;

void sl() {
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    
    int p1 = (x1+y1)%2;
    int p2 = (x2+y2)%2;
    
    if(p1==p2){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        sl();
    }
    return 0;
}

// Solved By Mahfuz Uddin