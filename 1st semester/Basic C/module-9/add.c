#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n); 
    int a[n+1];
    for ( int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int idx, val;
    scanf("%d %d",&idx,&val);
    for (int i = n; i > idx;i--)
    {
        a[i]=a[i-1];
    }
    a[idx]=val;
    for ( int i = 0; i <=n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}