#include<stdio.h>
#include<limits.h>
void fun(int a[],int n)
{
    int max= INT_MIN;
    int min= INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
        if (min>a[i])
        {
            min=a[i];
        }  
    }
    printf("%d %d",min,max);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a,n);
    return 0;
}