#include<stdio.h>
int ar()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    return a;
}

int main()
{
    ar();
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",ar);
    }
    
   
    return 0;
}