#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a=x/1000;
    if (a%2==0)
    {
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
}