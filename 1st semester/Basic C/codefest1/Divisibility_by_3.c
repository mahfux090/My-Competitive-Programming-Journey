#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[1000001];
    scanf("%s", a);
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i]-'0';
    }
    if (sum%3==0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}