#include<stdio.h>
char char_to_ascii(char a){
    char b=a+32;
    return b;
}
int main()
{
    char a;
    scanf("%c",&a);
    char b=char_to_ascii(a);
    printf("%c",b);
    return 0;
}