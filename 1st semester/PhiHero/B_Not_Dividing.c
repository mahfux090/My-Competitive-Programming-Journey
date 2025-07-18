#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int c = 0; c < t; c++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 1; i < n; i++)
        {
            while (a[i] % a[i - 1] == 0)
            {
                a[i]++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
