#include<bits/stdc++.h>
using namespace std;
int par[100005];
int gp_sz[100005];
int find(int node)
{
    if(par[node]==-1)
        return node;
    int leader=find(par[node]);
    par[node]=leader;
    return leader;
}
void dsu_uni(int node1, int node2)
{
    int lead1=find(node1);
    int lead2=find(node2);
    if(gp_sz[lead1]>gp_sz[lead2])
    {
        par[lead2]=lead1;
        gp_sz[lead1]+=gp_sz[lead2];
    }
    else
    {
        par[lead1]=lead2;
        gp_sz[lead2]+=gp_sz[lead1];
    }
}

int main()
{
    memset(par,-1,sizeof(par));
    memset(gp_sz,1,sizeof(gp_sz));
    int n,e;
    cin>>n>>e;
    int ct=0;
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        int lead1=find(a);
        int lead2=find(b);
        if(lead1==lead2)
            ct++;
        else{
            dsu_uni(a,b);
        }
    }
    cout<<ct;
    return 0;
}