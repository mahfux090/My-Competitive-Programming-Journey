#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int i=0;
    int j=n-1;

    while (i<j)
    {
        if (a[i]!=a[j])
        {
            printf("NO");
            return 0 ;

        }
        

        i++;
        j--;
    }
    
    printf("YES\n");
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     int b[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         b[i]=a[i];
//     }
//     int i=0;
//     int j=n-1;

//     while (i<j)
//     {
//         int tem = a[i];
//         a[i]=a[j];
//         a[j]=tem;

//         i++;
//         j--;
//     }
//     for (int  i = 0; i <n; i++)
//     {
//         if (a[i]==b[i])
//         {
//             printf("YES");
//             return 0;
//         }
        
//     }
//     for (int  i = 0; i <n; i++)
//     {
//         if (a[i]!=b[i])
//         {
//             printf("NO");
//             return 0;
//         }
        
//     }
//     return 0;
// }