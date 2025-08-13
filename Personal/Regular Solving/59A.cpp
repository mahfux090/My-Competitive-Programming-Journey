#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int up=0,low=0;
    for(char c:s){
        if(isupper(c)) up++;
        else low++;
    }
    if(up>low) for(char &c:s) c=toupper(c);
    else for(char &c:s) c=tolower(c);
    cout<<s;
}
