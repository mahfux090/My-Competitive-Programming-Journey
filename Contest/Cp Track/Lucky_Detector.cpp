#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag =1;
    for(char x:s)
    {
        if(x=='7')
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
        cout<<"Lucky";
    else 
        cout<<"Not Lucky";

    return 0;
}