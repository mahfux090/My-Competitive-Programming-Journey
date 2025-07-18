#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int div = x/1000;
    if (div%2==0)
    {
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}