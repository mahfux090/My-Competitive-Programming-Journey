#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int two_c=0;
    int three_c=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            two_c++;
        }
        else if (a[i]%3==0)
        {
            three_c++;
        }
        
        
    }
    printf("%d %d",two_c,three_c);
    
    return 0;
}