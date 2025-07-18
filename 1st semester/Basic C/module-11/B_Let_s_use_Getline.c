#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    gets(s);
    int len=strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i]=='\\')
        {
           break;
        }
        printf("%c",s[i]);
        
    }
    
    return 0;
}
