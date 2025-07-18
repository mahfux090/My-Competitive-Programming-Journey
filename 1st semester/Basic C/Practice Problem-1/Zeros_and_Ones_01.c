#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int zero=0;
    int one=0;
    for (int i = 1; i <=n; i++)
    {
        int a;
        scanf("%d",&a);
        if (a==1)
        {
           one++;
        }
        else if (a==0)
        {
            zero++;
        }
    }
    printf("%d %d",zero,one);
    return 0;
}