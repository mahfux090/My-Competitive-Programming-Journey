#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>adj_list[n];
    for (int i = 0; i < e; i++)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b); 
    }
    int q;
    cin>>q;
    while (q--)
    {
        int src,des;
        cin>>src>>des;
        int flag=0;
        if(src==des)
            flag=1;
        for(int x:adj_list[src])
        {
            if(x==des)
            {
                flag=1;
                break;
            }
        }
        if (flag==1)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
        
    }
    
    
    return 0;
}