#include<stdio.h>
void print(int n)
{
    for (int i = 1; i <n; i++)
    {
        printf("%d ",i);
    }
    printf("%d",n);
}

int main()
{
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}