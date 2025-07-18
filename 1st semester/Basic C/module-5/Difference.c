#include<stdio.h>
int main()
{
    long long int a,d;
    int b,c;
    scanf("%lld %d %d %lld",&a,&b,&c,&d);
    long long int x= a*b;
    long long int i= c*d;
    long long int n= x-i;

    printf("Difference = %lld",n);
    
    return 0;
}