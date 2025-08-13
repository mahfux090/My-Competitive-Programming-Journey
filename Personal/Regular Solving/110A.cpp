#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int t=0;
    for(char c:n)
    {
        if(c=='4'||c=='7') t++;
    }
    if(n.size()==t)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}