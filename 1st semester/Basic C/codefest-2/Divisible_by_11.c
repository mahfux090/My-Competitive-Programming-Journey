#include<stdio.h>
#include<string.h>

int main()
{
    char n[101];
    scanf("%s",n);
    int len = strlen(n);
    int even=0,odd=0;
    for (int i = len-1; i >=0; i--)
    {
        int num= n[i]-'0';
        if (i%2==1)
        {
            even+=num;
        }
        else{
            odd+=num;
        }
    }
    int sum= abs(odd-even);
    if (sum%11==0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}