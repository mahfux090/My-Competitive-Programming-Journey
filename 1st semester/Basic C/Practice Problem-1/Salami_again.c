#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int b= max-a[i];
        printf("%d ",b);
    }
    
    
    return 0;
}