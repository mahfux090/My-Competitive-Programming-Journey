#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 1; i <=t; i++)
    {
        long long int m;
        scanf("%lld",&m);
        int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    long long int s=a*b*c;
    long long int d=m/s;
    if (m%s==0)
    {
        printf("%lld",d);
    }
    else{
        printf("-1");
    }
    printf("\n");
    }
    return 0;
}