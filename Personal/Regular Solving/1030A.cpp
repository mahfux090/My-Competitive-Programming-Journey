#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(x==1) flag=1;
    }
    flag==0? cout<<"EASY":cout<<"HARD";
    return 0;
}