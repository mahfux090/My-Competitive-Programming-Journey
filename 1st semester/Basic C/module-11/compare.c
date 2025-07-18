#include<stdio.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);
    int i=0;
    while (1)
    {
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("Equal\n");
            break;
        }
        else if (a[i]=='\0')
        {
            printf("B is boro\n");
            break;
        }
        else if (b[i]=='\0')
        {
            printf("A is boro\n");
            break;
        }
        else if (a[i]==b[i])
        {
            i++;
        }
        else if (a[i]<=b[i])
        {
            printf("A coto\n");
            break;
        }
        else 
        {
            printf("B coto\n");
            break;
        }
        

    }
    
    return 0;
}