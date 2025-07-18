#include<stdio.h>

void Recursion(int n,int i)
{
    if (n+1==i)
    {
        return 0;
    }
    printf("%d\n",i);
    Recursion(n,i+1);
}
int main()
{
    int i=1;
    int n;
    scanf("%d",&n);
    Recursion(n,i);
    return 0;
}