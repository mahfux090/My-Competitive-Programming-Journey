#include<stdio.h>
void Print_Even_Indices(int a[], int n)
{
    if (n<0)
    {
        return ;
    }
    
    if (n%2==0)
    {
        printf("%d ",a[n]);
    }
    
    Print_Even_Indices(a,n-1);
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
    Print_Even_Indices(a,n-1);
    return 0;
}