#include<stdio.h>

void Recursion(int n)
{
    if (n==1)
    {
        printf("1");
        return 0;
    }
    printf("%d ",n);
    Recursion(n-1);
}
int main()
{
    int i=1;
    int n;
    scanf("%d",&n);
    Recursion(n);
    return 0;
}