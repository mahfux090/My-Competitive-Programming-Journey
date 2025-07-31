#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int z=0,o=0;
        for(char c:s){
            if(c=='0')z++;
            else o++;
        }
        if(z==o)cout<<2*z<<'\n';
        else cout<<2*min(z,o)+1<<'\n';
    }
}
//Solved By Mahfuz Uddin
