#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylsit;
    int val;
    while (cin>>val && val!=-1)
    {
        mylsit.push_back(val);
    }
    mylsit.sort();
    mylsit.unique();
    for (int i : mylsit)
    {
        cout<<i<<" ";
    }
    
    return 0;
}