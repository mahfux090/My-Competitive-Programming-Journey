#include<bits/stdc++.h>
using namespace std;
bool make(int n)
{
    if(n==1)
        return true;
    if(n<1)
        return false;
    if(n%2==0)
        return make(n/2);
    else
        return make(n-3);
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(make((n)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}