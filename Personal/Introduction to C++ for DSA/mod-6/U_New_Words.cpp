#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int E=0,G=0,Y=0,P=0,T=0;
    for ( char c:s)
    {
        if(c=='E' || c=='e')
        {
            E++;
        }
        if(c=='G' || c=='g')
        {
            G++;
        }
        if(c=='Y' || c=='y')
        {
            Y++;
        }
        if(c=='p' || c=='P')
        {
            P++;
        }
        if(c=='T' || c=='t')
        {
            T++;
        }
    }
    int mini=min({E,G,Y,P,T});
    cout<<mini;
    return 0;
}