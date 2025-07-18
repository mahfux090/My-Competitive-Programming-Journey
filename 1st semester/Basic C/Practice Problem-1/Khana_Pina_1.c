#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a>=1000)
    {
        printf("Three Kacchi");
    }
    else if (a>=500)
    {
        printf("One Large Pizza");
    }
    else if (a<500 && a>=250)
    {
        printf("Three Small Burger");
    }
    else if (a>=100)
    {
        printf("Three Fuchka");
    }
    else{
        printf("Nothing");
    }
    
    return 0;
}