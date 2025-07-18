#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);
    int v= strcmp(a,b);
    if (v<0)
    {
        printf("b boro");
    }
    else if (v>0)
    {
        printf("a boro");
    }
    else 
    {
        printf("soman");
    }
    
    
    

    return 0;
}