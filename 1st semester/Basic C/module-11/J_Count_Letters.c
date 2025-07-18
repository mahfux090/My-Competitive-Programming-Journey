#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    scanf("%s",s);

    int fre[26] = {0};
    int slen = strlen(s);  

    for (int i = 0; i < slen; i++)
    {
        int val = s[i]- 97;
        fre[val]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c : %d\n", i + 97, fre[i]);
        }
    }

    return 0;
}
