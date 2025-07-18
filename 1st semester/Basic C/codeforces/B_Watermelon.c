#include<stdio.h>
int main()
{
    int water_mellon;
    scanf("%d",&water_mellon);
    if (water_mellon%2==0 && water_mellon>=4)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}