#include<stdio.h>
int main()
{
    int n;
    long long int x;
    double y;
    char z;
    float a;

    scanf("%d %lld",&n,&x);
    scanf(" %c",&z);
    scanf("%f %lf",&a,&y);

    printf("%d\n",n);
    printf("%lld\n",x);
    printf("%c\n",z);
    printf("%.2f\n",a);
    printf("%.1lf\n",y);
    return 0;
}