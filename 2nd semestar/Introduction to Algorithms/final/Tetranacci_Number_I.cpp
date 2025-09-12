#include<bits/stdc++.h>
using namespace std;
int tetr(int n)
{
    if(n==0)
        return 0;
    if(n==1 ||n==2)
        return 1;
    if(n==3)
        return 2;
    return tetr(n-1)+tetr(n-2)+tetr(n-3)+tetr(n-4);
}
int main()
{
    int n;
    cin>>n;
    cout<<tetr(n);
    return 0;
}