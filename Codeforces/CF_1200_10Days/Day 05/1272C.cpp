#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    set<char> st;
    for(int i=0;i<k;i++){
        char c;
        cin>>c;
        st.insert(c);
    }
    long long ans=0,len=0;
    for(int i=0;i<n;i++){
        if(st.count(s[i])) len++;
        else{
            ans+=len*(len+1)/2;
            len=0;
        }
    }
    ans+=len*(len+1)/2;
    cout<<ans<<"\n";
}
