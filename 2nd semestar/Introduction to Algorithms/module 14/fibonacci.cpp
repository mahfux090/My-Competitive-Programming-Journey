#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n<2)
        return n;
    int ans= fibo(n-1)+ fibo(n-2);
    return ans;
}
int main()
{
    cout<<fibo(5);
    return 0;
}