#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int flag=0;
    for (int i = 0; i <n-1; i++)
    {
        if (v[i]==v[i+1])
        {
            flag=1;
        }        
    }
    if (flag==1)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}