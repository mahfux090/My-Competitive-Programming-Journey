#include<stdio.h>
int rec(char a[], int i)
{
    if (a[i]=='\0')
    {
        return 0;
    }
    int b=rec(a,i+1);
    if ('a'==a[i] || 'A'==a[i])
    {
         return b+1;
    }
    else if ('e'==a[i] || 'E'==a[i])
    {
         return b+1;
    }
    else if ('i'==a[i] || 'I'==a[i])
    {
         return b+1;
    }
    else if ('o'==a[i] || 'O'==a[i])
    {
         return b+1;
    }
    else if ('U'==a[i] || 'u'==a[i])
    {
         return b+1;
    }
    else{
        return b;
    }
}
int main()
{
    char a[201];
    fgets(a,201,stdin);
    int b=rec(a,0);
    printf("%d",b);
    return 0;
}