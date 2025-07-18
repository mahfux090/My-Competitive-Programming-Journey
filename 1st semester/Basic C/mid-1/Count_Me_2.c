#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",s);
    int slen=strlen(s);
    int count=0;
    for (int i = 0; i < slen; i++)
    {
        if ('a'==s[i])
        {
            continue;
        }
        else if ('e'==s[i])
        {
            continue;
        }
        else if ('i'==s[i])
        {
            continue;
        }
        else if ('o'==s[i])
        {
            continue;
        }
        else if ('u'==s[i])
        {
            continue;
        }
        else{
            count++;
        }
        
    }
    
    printf("%d",count);
    return 0;
}