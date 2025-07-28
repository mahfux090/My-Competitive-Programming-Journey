#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%2!=0){
            c++;
        }
    }
    if(c>0 && c%2==0){
        cout <<"YES" << endl;
    }else{
        cout<<"NO"<<endl;
    }
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