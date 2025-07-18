#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int primary_sum=0;
    int secondary_sum=0;
     for (int i = 0; i < n; i++)
    {
        
            primary_sum+=a[i][i];
            secondary_sum+=a[i][n-i-1];
        
    }
    printf("%d",abs(primary_sum-secondary_sum));
    
    return 0;
}