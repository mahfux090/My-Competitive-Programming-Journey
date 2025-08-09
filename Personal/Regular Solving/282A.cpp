#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int tol=0;
    while (t--)
    {
        string s;
        cin>>s;
        if(s=="X++" || s=="++X")
            tol++;
        else if(s=="--X" || s=="X--")
            tol--;
    }
    cout<<tol;
    
    return 0;
}