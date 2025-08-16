#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    queue<string>q;
    while (t--)
    {
        string com;
        cin>>com;
        if(com=="ARRIVE")
        {
            string s;
            cin>>s;
            q.push(s);
        }
        else if (com=="SERVE")
        {
            if(!q.empty())
            {
                q.pop();
            }
            else
            {
                cout<<"No patients"<<endl;
            }
        }
        else if (com=="FIRST")
        {
            if(q.empty())
            {
                cout<<"No patients"<<endl;
            }
            else
            {
                cout<<q.front()<<endl;
            }
        }
        else if (com=="LAST")
        {
             if(q.empty())
             {
                cout<<"No patients"<<endl;
            }
            else
            {
                queue<string>tmp;
                string last;
                while (!q.empty())
                {
                    last=q.front();
                    tmp.push(last);
                    q.pop();
                }
                q=tmp;
                cout<<last<<endl;
            }
        }
        else if (com=="COUNT")
            {
                cout<<q.size()<<endl;
            }
        else if (com=="SHOW")
            {
                if(q.empty())
                {
                    cout<<"No patients"<<endl;
                }
                else
                {
                    queue<string>tmp=q;
                    while (!tmp.empty())
                    {
                        cout<<tmp.front();
                        tmp.pop();
                        if(!tmp.empty()) 
                        {
                            cout<<" ";
                        }
                    }
                    cout<<endl;
                }
            }
    }
    return 0;
}  