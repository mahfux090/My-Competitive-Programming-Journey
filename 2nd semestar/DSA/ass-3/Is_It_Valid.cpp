#include<bits/stdc++.h>
using namespace std;
string valid_it(string s)
{
    stack<char>st;
    for(char c: s)
    {
        if(st.empty())
        {
            st.push(c);
        }
        else if(c=='0' && st.top()=='1') 
        {
            st.pop();
        }
        else if(c=='1' && st.top()=='0')
        {
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    return st.empty() ? "YES" : "NO";
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        cout<<valid_it(s)<<endl;
    }
    
    return 0;
}