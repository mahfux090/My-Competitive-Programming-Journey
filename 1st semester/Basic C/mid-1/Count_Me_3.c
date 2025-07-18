#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        char s[10001];
        scanf("%s",s);
        int len=strlen(s);
        int ca=0;
        // MY LANGUA VG 
        int sa=0;
        int digit=0;
        for (int i = 0; i < len; i++)
        {
            if (s[i]>='A' && s[i]<='Z')
            {
                ca++;
            }
            else if (s[i]>='a' && s[i]<='z')
            {
                sa++;
            }
            else if (s[i]>='0' && s[i]<='9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n",ca,sa,digit);
        
    }
    
    return 0;
}