#include<stdio.h>
int main()
{
    int a;
    long long int b;
    char s;
    float c;
    double d;
    scanf("%d %lld  %c %f  %lf",&a,&b,&s,&c,&d);
    printf("%d\n%lld\n%c\n%.2f\n%.1lf",a,b,s,c,d);
}