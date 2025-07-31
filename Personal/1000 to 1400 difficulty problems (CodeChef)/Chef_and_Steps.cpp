#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    long long k;
    cin>>n >>k;
    for(int i=0; i<n; i++){
        long long d;
        cin>>d;
        if(d%k==0){
            cout<<'1';
        }
        else{
            cout<<'0';
        }
    }
    cout<<"\n";
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