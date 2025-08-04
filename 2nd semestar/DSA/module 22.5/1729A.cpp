#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int a_come= a-1;
    int b_come=abs(b-c)+(c-1);
    if(a_come<b_come)
        cout<<"1"<<endl;
    else if (a_come==b_come)
        cout<<"3"<<endl;
    else
        cout<<"2"<<endl;
    
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}