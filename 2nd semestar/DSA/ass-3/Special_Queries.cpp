#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    queue<string>q;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            string s;
            cin>>s;
            q.push(s);
        }
        else{
            if (q.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else{
            cout<<q.front()<<endl;
            q.pop();
            }
        }
    }
    return 0;
}