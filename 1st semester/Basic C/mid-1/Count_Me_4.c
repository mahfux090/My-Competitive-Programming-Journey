#include<stdio.h>
#include<string.h>
int main()
{
    char a[10001];
    scanf("%s",a);
    int len=strlen(a);
    int fre[26]={0};
    for (int i = 0; i < len; i++)
    {
        int val=a[i]-97;
        fre[val]++;
      
    }
    for (int i = 0; i < 26; i++)
    {
        if (fre[i]>0)
        {
            printf("%c - %d\n",i+97,fre[i]);
        }
        
       
    }
    
    


    return 0;
}