#include<stdio.h>
int max( int a[], int i,int n)
{

    if (i==n-1)
    {
        return a[i];
    }
    int b=max(a,i+1,n);
    if (a[i]>b)
    {
        return a[i];
    }
    else{
        return b;
    }
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
    int m=max(a,0,n);
    printf("%d",m);
    return 0;
}