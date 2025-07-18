#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
   
    for (int t = 0; t < n; t++)
    {
        char a[51],b[51];
        scanf("%s %s",a,b);
        int alen=strlen(a);
        int blen=strlen(b);
        int i=0,j=0;
    while( i <alen && j < blen )
    {
        printf("%c%c",a[i],b[i]);
         i++;
        j++;
    }
    while (i<alen)
    {
        printf("%c",a[i]);
        i++;
    }
    while (j<blen)
    {
        printf("%c",b[j]);
        j++;
    }
    printf("\n");
    }
    
    return 0;
}