#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);
    int lenth_b=strlen(b);
    for (int i = 0; i <=lenth_b; i++)
    {
        a[i]=b[i];
    }
    printf("%s %s",a,b);
    
    return 0;
}