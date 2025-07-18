#include<stdio.h>
int main()
{
    int n,v;
    int sum=0;
    int sum1=0;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%d",&v);
        if (v>=0)
        {
            sum+=v;
        }
        else if (v<=0)
        {
            sum1+=v;
        }
    }
    printf("%d %d",sum,sum1);
    
    return 0;
}