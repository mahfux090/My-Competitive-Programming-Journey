#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    while (true)
    {
        y++;
        string s=to_string(y);
        set<char>free(s.begin(),s.end());
        if(s.size()==free.size()) break;
    }
    cout<<y;
    return 0;
}