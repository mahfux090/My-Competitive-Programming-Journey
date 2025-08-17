#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n>>p;
    set<int>st;
    for (int i = 1; i <=p; i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    cin>>q;
    for (int i = 1; i <=q; i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    if(st.size()==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    
    return 0;
}