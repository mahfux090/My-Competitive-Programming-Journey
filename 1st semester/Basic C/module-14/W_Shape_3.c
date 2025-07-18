#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=1,sa=n-1;
    for (int i = 1; i <=n; i++)
    {
        for (int k = 1; k<=sa; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <=s ; j++)
        {
            printf("*");
        }
        printf("\n");
        s+=2;
        sa--;
    }
    int l=0;
    for (int i = 1; i <=n; i++)
    {
        for (int k = 1; k <=l ; k++)
        {
            printf(" ");
        }
        s-=2;
        for (int j = 1; j <=s ; j++)
        {
            printf("*");
        }
        printf("\n");
        
        l++;
    }
    
    
    return 0;
}