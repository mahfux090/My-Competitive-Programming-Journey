#include<stdio.h>
#include<string.h>

int main()
{
    char a[101],b[101];
    
    scanf("%s",a);
    int len = strlen(a);
    strcpy(b,a);
    
    
   int temp =a[0];
   a[0]=a[len-1];
   a[len-1]=temp;
   if (b[0]== a[0])
   {
    printf("Yes");
   }
   else{
    printf("No");
   }
   
    

    return 0;
}