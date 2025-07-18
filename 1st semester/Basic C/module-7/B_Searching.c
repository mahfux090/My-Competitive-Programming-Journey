#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int s;

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
            
    }
    scanf("%d",&s);

    for (int i = 0; i <n; i++) 
    {
        if (s==a[i])
        {
    

            printf("%d",i);
            
            return 0;
        }      
    }
    
        printf("-1");
    
    
    return 0;
}