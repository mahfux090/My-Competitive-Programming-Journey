#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int row,col;
    for (int i = 1; i <=5; i++)
    {
        for (int j =1; j <=5; j++)
        {
            cin>>x;
            if(x==1)
            {
                row=i;
                col=j;
            }
        }
    }
    cout<<abs(row-3)+abs(col-3);
    
    return 0;
}