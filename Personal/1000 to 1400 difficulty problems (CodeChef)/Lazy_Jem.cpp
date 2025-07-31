#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n,b,m,tm=0;
        cin>>n>>b>>m;
        while(n>0){
            long long d=(n%2==0)?n/2:(n+1)/2;
            tm+=d*m;
            n-=d;
            if(n>0)tm+=b;
            m*=2;
        }
        cout<<tm<<'\n';
    }
}
//Solved By Mahfuz Uddin
