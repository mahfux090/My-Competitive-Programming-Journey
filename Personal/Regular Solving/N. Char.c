#include<stdio.h>
int main()
{
    char x; //a,b,c,A,B
    scanf("%c",&x);
    
    if(x>='a' && x<='z')
    {
        int ans=x-32; 
        printf("%c",ans);

    }
    else{
        int ans=x+32; //A,B
        printf("%c",ans);
    }

}