#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n%4==0 || n%7==0)
    {
        printf("YES");
    }
    else if (n==47 || n==744)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}