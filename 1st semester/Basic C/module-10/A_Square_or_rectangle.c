#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int w,l;
    for (int i = 1; i <=t; i++)
    {
        scanf("%d %d",&w,&l);

        if (w==l)
    {
        printf("Square\n");
    }
    else{
        printf("Rectangle\n");
    }
    }
    
    return 0;
}