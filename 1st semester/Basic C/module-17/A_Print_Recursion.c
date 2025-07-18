#include<stdio.h>

void Recursion(int n)
{
    if (n==0)
    {
        return 0;
    }
    printf("I love Recursion\n");
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