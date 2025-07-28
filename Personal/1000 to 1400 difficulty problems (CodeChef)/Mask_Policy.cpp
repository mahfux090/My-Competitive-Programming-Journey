#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n >> a;
        int u=n-a;
        if(a<u){
            cout<<a<<endl;
        }else{
            cout<<u<<endl;
        }
    }
    return 0;
}
// Solved By Mahfuz Uddin