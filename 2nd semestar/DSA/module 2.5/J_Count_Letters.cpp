#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    vector<int>fre(26);
    for (int i = 0; i<a.size(); i++)
    {
        int val=a[i]-'a';
        fre[val]++;
    }
    for (int i = 0; i < fre.size(); i++)
    {
        if (fre[i]>0)
        {
            char b= 'a'+i;
            cout<<b<<" : "<<fre[i]<<endl;
        }
        
    }
    
    
    return 0;
}