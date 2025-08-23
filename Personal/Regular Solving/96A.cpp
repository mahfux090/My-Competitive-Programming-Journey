#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]) c++;
        else c=1;
        if(c>=7){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
