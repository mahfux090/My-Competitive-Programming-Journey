#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);
    int lenth_a=strlen(a);
    int lenth_b=strlen(b);

    for (int i = 0; i <lenth_b; i++)
    {
        a[lenth_a]=b[i];
        lenth_a++;
    }
    printf("%s %s",a,b);
    
    return 0;
}