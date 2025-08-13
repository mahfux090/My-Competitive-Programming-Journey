#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int A=0,D=0;
    for(char c:s)
    {
        if(c=='A')
            A++;
        else D++;
    }
    if(A==D)
        cout<<"Friendship";
    else if (A>D)
        cout<<"Anton";
    else cout<<"Danik";
    return 0;
}