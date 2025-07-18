#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    scanf("%s",a);
    int b= strlen(a);
    int i=0;
    int j = b-1;
    while (i<j)
    {
        if (a[i]!=a[j])
        {
            printf("NO");
            return 0;
        }
        i++;
        j--;
    }
    printf("YES");
    
    return 0;
}