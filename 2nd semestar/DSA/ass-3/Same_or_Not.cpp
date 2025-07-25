#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if (n!=m)
    {
        cout<<"NO";
        return 0;
    }
    stack<int>st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    queue<int>q;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    int flag=1;
    while (!st.empty())
    {
        if(st.top()==q.front())
        {
            st.pop();
            q.pop();
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }  
    else{
        cout<<"NO";
    }
    return 0;
}