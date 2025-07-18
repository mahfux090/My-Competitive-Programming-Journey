#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sa='A';
    int s=n-1;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=s; j++)
        {
            printf(" ");
        }
        
        for (int k ='A' ; k<=sa ; k++)
        {
            printf("%c ",k);
        }
        printf("\n");
        sa++;
        s--;

    }
    
    return 0;
}