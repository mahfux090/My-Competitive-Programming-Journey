#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);
    int v= strcmp(a,b);
    if (v<0)
    {
        printf("%s",a);
    }
    else if (v>0)
    {
        printf("%s",b);
    }
    else 
    {
        printf("%s",a);
    }
    
    
    

    return 0;
}