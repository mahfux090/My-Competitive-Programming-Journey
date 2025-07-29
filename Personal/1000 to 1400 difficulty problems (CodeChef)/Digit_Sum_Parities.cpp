#include<bits/stdc++.h>

using namespace std;

int d_sum(int n){
    int sm=0;
    while(n>0){
        sm += n%10;
        n /= 10;
    }
    return sm;
}

void slv(){
    int n;
    cin>>n;

    int p1 = d_sum(n)%2;
    int p2 = d_sum(n+1)%2;
    
    if(p1!=p2) {
        cout << n + 1 << "\n";
    } else {
        cout << n + 2 << "\n";
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