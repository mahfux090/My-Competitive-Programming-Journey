#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int min = 0;
    int max= 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 1; i <n; i++)
    {
        if (a[i]< a[min])
        {
            min =i;
        }
        if (a[i]>a[max])
        {
            max =i;
        }
    }
    int temp=a[min];
    a[min]=a[max];
    a[max]=temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }


    
    return 0;
}