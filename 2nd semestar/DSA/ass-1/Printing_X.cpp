#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j && j==n-1-i)
            {
                cout<<"X";
            }
            else if (j==n-1-i)
            {
                cout<<"/";
            }
            else if (i==j)
            {
                cout<<"\\";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;        
    }
    
    return 0;
}