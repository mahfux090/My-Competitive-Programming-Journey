#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        if (i%3==0)
        {
            printf("%d Yes\n",i);
        }
        else if (i%5==0)
        {
            printf("%d Yes\n",i);
        }
        else{
            printf("%d No\n",i);
        }
    }
    
    return 0;
}