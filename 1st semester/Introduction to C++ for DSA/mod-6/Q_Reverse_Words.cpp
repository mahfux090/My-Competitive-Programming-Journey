#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    stringstream aa (a);
    string b;
     aa >>b;
     reverse(b.begin(),b.end());
     cout<<b;
     while (aa>>b)
     {
        reverse(b.begin(),b.end());
        cout<<" "<<b;
     }
     
    return 0;
}