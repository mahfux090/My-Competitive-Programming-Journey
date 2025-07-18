#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        char a[1001];
        scanf("%s", a);
        int len = strlen(a);
        int fre[26] = {0};
        for (int i = 0; i < len; i++)
        {
            int val= a[i] -'a';
            fre[val]++;
        }
        int one = 0;
        for (int i = 0; i < 26; i++)
        {
            if (fre[i] % 2 == 1)
                one++;
        }
        if (one != 0)
        {
            printf("%d\n", one-1);
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}
