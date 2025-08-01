#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y;
    cin >>n>>x>>y;
    string s;
    cin >>s;

    int d1=s[x-1]-'0';
    int d2=s[y-1]-'0';

    if ((d2!=0 && d1%d2==0) || (d1!=0 && d2%d1==0)) {
        cout<<"YES"<<endl;
    }
    else {
        cout <<"NO"<<endl;
    }

    return 0;
}
