#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=(n/2)+6;
    int b=(n/2)+5;
    int c=1;
    for (int  i = 1; i<=a; i++)
    {
        for (int j  = 1; j <=b; j++)
        {
            printf(" ");
        }
        for (int k = 1; k<=c; k++)
        {
            printf("*");
        }
        printf("\n");
        b--;
        c+=2;
    }
    for (int i = 1; i <=5; i++)
    {
        for (int j  = 1; j <=5; j++)
        {
            printf(" ");
        }
        for (int k  = 1; k <=n; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}