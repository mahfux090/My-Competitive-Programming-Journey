#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        cout<<max(0LL,(n-1)/2)<<"\n";
    }
}
