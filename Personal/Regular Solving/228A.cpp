#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    for (int  i = 0; i < 4; i++)
    {
        int x; cin>>x;
        st.insert(x);
    }
    cout<<4-st.size();
    return 0;
}