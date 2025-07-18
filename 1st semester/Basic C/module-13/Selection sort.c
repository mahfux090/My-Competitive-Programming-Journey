#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int ar = 0; ar < n; ar++)
    {
        scanf("%d",&a[ar]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if (a[i]>a[j])
            {
                int tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }  
        }
    }
    for (int ar = 0; ar < n; ar++)
    {
        printf("%d ",a[ar]);
    }
    
    
    return 0;
}