#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=1;
    stack<int>st;
    while (n--)
    {
        int m;
        cin>>m;
        st.push(m);
    }
    while (!st.empty())
    {
        int k=st.top();
        st.pop();
        if(!st.empty()&& k!=st.top())
            c++;
    }
    cout<<c;
    return 0;
}