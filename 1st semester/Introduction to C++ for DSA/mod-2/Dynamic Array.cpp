#include<bits/stdc++.h>
using namespace std;
int* fun()
{
    int*x=new int[5];
     x[0] = 1;
    x[1] = 2;
    x[2] = 3;
    x[3] = 4;
    x[4] = 5;
    return x;
}
int main()
{
    int* a=fun();
    for (int i = 0; i < 5; i++)
    {
        cout <<a[i]<<endl;
    }
    
    return 0;
}