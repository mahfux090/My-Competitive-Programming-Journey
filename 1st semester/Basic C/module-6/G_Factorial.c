#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    
    for (int j = 1; j <=t; j++)
    {
        int x;
       long long int fact = 1;
    scanf("%d",&x);
    
        for ( int i = 1; i<=x; i++)
    {

        fact *=  i;
        
    }
    printf("%lld\n",fact); 
    }

    
    
    return 0;
}