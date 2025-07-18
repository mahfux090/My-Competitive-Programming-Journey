#include<stdio.h>
#include<string.h>
int main()
{
    char a[78];
    scanf("%s",a);
    int fre[26]={0};
    for (int i = 0; i <77; i++)
    {
        int var=a[i]-'a';
        fre[var]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (fre[i]==2)
        {
            printf("%c", i + 'a');
            break;
        }
    
    return 0;
}