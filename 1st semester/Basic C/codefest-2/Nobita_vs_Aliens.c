#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <n-1; i++)
    {
        for (int j  = i+1; j <n; j++)
        {
            if (a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }   
    }
    int c=0;
    int i=0,j=n-1;
    while (i<j)
    {
        if (a[i]+a[j]<=k)
        {
            c++;
            i++;
            j--;
        }
        else{
            i++;
            j--;
        }
    }
    printf("%d",c);
    
    return 0;
}