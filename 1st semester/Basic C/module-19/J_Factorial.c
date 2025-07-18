#include<stdio.h>
long long int res(int a)
{
    if (a==0)
    {
        return 1 ;
    }
    long long int mul= res(a-1);
    return a*mul;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int b=res(n);
    printf("%lld",b);
    return 0;
}