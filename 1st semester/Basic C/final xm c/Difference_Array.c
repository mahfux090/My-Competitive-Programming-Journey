#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int s = 1; s <=t; s++)
    {
        int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n],c[n];
    for (int i = 0; i < n; i++)
    {
        b[i]=a[i];
    }
    
    for (int i = 0; i <n-1; i++)
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
    for (int i = 0; i < n; i++)
    {
        c[i]=a[i]-b[i];
    }
    for (int i = 0; i < n; i++)
    {
         printf("%d ",abs(c[i]));
    }
    printf("\n");
    }
    return 0;
}