#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem=0,max_pass=0;
    cin>>n;
    while (n--)
    {
        int ex,in;
        cin>>ex>>in;
        rem=(rem-ex)+in;
        max_pass=max(max_pass,rem);
    }
    cout<<max_pass;
    
    return 0;
}