#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int a[n];
    for (int ar = 0; ar < n; ar++)
    {
        scanf("%d",&a[ar]);
    }
    scanf("%d",&x);
    int flag=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if (a[i]+a[j]==x)
            {
                flag=1;
                printf("Yes");
                return 0;
            }  
        }
    }
    if (flag==0)
    {
        printf("No");
    }
    return 0;
}