#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int af_3=3*a;
    if(b<af_3) 
        cout<<"Dry";
    else cout<<"Rain";
    return 0;
}