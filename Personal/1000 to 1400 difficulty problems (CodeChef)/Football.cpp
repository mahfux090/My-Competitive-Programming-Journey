#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0; i < n; i++){
        cin>>b[i];
    }

    int mp=0;
    for(int i=0; i<n; i++){
        int p = a[i]*20 - b[i]*10;
        if(p<0){
            p=0;
        }
        if(p>mp){
            mp = p;
        }
    }
    cout<<mp<<endl;
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