#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i =2; i <n; i++)
    {
        if (n%i==0)
        {
            printf("NO");
            return 0;
        }
        
    }
    if (n%1==0 && n%n==0)
    {
        printf("YES");
    }
    
    
    return 0;
}