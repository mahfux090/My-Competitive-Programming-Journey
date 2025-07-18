#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int max= INT_MIN;
    for (int i = 1; i <=n; i++)
    {
        int y;
        scanf("%d",&y);
        if (y>max)
        {
            max=y;
        }
        
    }
    printf("%d",max);
    
    return 0;
}