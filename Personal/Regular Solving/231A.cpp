#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int solve=0;
    while (n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sum =a+b+c;
        if(sum>=2)
            solve++;
    }
    cout<<solve;
    
    return 0;
}