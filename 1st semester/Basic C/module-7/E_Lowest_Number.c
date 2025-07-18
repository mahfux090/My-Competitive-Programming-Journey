#include<stdio.h>
#include<limits.h>
int main()
{
    
    int n;
    scanf("%d",&n);
    int a[n];
    int min=INT_MAX,in;

    for (int i = 1; i <=n; i++)
    {
        int b[]={0};
        scanf("%d",&a[i]);
        if (a[i]<min)
        {
            min=a[i];
            in=i;
            
        }
    }
    printf("%d %d",min,in);
    return 0;
}