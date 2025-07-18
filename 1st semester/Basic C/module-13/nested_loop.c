#include<stdio.h>
int main()
{
    int n,s=1;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=s; j++)
        {
            printf("*");
        }
        printf("\n");
        s++;
    }
    
    return 0;
}