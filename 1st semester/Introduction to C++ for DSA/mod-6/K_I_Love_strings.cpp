#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string a,b;
    cin>>a>>b; 
    int len=a.size();
    int len2=b.size();
    int len3 =max(len,len2);
    for (int i = 0; i <len3; i++)
    {
        if (i<a.size())
        {
            cout<<a[i];
        }
        if (i<b.size())
        {
            cout<<b[i];
        }
    }
    cout<<endl;
}
    return 0;
}