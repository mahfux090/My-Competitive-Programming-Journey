#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int mid=n/2;
        if(n%2==0)
        {
            for (int i = 0; i < mid-1; i++)
            {
            cout<<"-1 3 ";
            }
            cout<<"-1 2"<<endl;
        }
        else{
            for (int i = 0; i < mid; i++)
            {
                cout<<"-1 3 ";
            }
            cout<<"-1"<<endl;
        }
    }  
    return 0;
}