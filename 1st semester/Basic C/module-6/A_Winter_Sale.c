#include<stdio.h>
int main()
{
    float d,af;
    scanf("%f %f",&d,&af);
    float bf;
  

    bf=af/ (1-d/100);
    printf("%.2f\n",bf);

    return 0;
}