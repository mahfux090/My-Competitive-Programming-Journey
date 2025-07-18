#include<stdio.h>
void print_digits(int n)
{
    if (n==0)
    {
        return;
    }
    print_digits(n/10);
    int b=n%10;
    printf("%d ",b);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        int a;
        scanf("%d",&a);
        if (a==0)
        {
            printf("0");
        }
        print_digits(a);
        printf("\n");

    }
    
    return 0;
}