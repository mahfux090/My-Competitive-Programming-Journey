#include<stdio.h>
int main()
{
    int n,s=1;
    scanf("%d",&n);
    int sp=n-1;
    for (int i = 1; i <=n; i++)
    {
        for (int k = 1; k <=sp; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <=s; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        s+=1;
        sp--;
    }
    
    return 0;
}