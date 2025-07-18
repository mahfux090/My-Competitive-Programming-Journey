#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    int b[m+1];
    for (int i = 0; i <=m; i++)
    {
        b[i]= 0;
    }
    for (int i = 0; i < n; i++)
    {
        int val=a[i];
        b[val]++;
    }
    for (int i = 1; i <=m; i++)
    {
        printf("%d\n",b[i]);
    }
    
    
    return 0;
}