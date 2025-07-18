#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 1 ; i <=t; i++)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int one_m= m1*d;
        int m3=m1+m2;
        int m3Work=one_m/m3;
        int fewer_days= d-m3Work;
        printf("%d\n",fewer_days);
    }
    
    return 0;
}