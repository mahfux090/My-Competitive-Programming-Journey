#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    double base=0.143*n;
    double result=pow(base, n);
    long long ans = floor(result+0.5);
    cout<<ans<<"\n";
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