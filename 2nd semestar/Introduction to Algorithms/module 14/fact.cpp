#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n==0)
        return 1;
    return n*fibo(n-1);

}
int main()
{
    cout<<fibo(5);
    return 0;
}