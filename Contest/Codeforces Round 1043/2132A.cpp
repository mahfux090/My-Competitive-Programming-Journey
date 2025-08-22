#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;string a,b,c;
        cin>>n>>a>>m>>b>>c;
        for(int i=0;i<m;i++){
            if(c[i]=='V') a=b[i]+a;
            else a=a+b[i];
        }
        cout<<a<<"\n";
    }
}
