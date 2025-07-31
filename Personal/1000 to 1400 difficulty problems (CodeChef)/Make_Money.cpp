#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x, c;
    cin >>n>> x>>c;
    long long p = 0;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(x-a > c){
            p += x-c;
        }
        else{
            p+=a;
        }
    }
    cout<< p <<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
// Solved By Mahfuz Uddin