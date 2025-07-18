#include<stdio.h>
void swap(int* n ,int* m)
{
    int temp=*n;
    *n=*m;
    *m=temp;
    
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    swap(&n,&m);
    printf("%d %d",n,m);
    return 0;
}