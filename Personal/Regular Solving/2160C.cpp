#include<bits/stdc++.h>
using namespace std;
int t;
long long n;
void process(){
    if(!n){
        cout<<"YES\n";
        return;
    }
    string s="";
    for(int i=0;i<40;i++)s.push_back('0');
    int st=-1;
    for(long long i=30;i>=0;i--){
        if(((n>>i)&1)){
            s.push_back('1');
            if(st==-1)st=s.size()-1;
        }
        else s.push_back('0');
    }
    for(int i=0;i<=st;i++){
        string tmp="";
        for(int j=i;j<s.size();j++)tmp.push_back(s[j]);
        string tmp1=tmp;
        reverse(tmp1.begin(),tmp1.end());
        if(tmp==tmp1){
            bool ok=1;
            if((int(tmp.size()))&1){
                if(tmp[(tmp.size()+1)/2-1]=='1')ok=0;
            }
            if(ok){
                cout<<"YES\n";
            return;}
        }
    }
    cout<<"NO\n";
}       
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    cin>>t;
    while(t--){
        cin>>n;
        process();
    }
}