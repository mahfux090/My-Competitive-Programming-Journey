#include<stdio.h>
int main()
{
    long long int a;
    int b ;
    scanf("%lld %d",&a,&b);
    int sum = a+b;
    long long int multi= a*b;
    int sub = a-b;
    
    printf("%lld + %d = %d\n",a,b,sum);
    printf("%lld * %d = %lld\n",a,b,multi);
    printf("%lld - %d = %d\n",a,b,sub);

    return 0;
}