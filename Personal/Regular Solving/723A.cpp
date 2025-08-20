#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3;cin>>x1>>x2>>x3;
    int a[3]={x1,x2,x3};
    sort(a,a+3);
    cout<<a[2]-a[0]<<endl;
}
