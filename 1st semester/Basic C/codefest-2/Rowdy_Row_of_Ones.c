#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int max=0,in=0;
    for (int i = 0; i < n; i++)
    {
        int c=0;
        for (int j = m-1; j >=0; j--)
        {
            if (a[i][j]==1)
            {
                c++;
            }
            else{
                break;
            }
        }
        if (c>max)
        {
            max=c;
            in=i;
        }
    }
    printf("%d\n",in);
    
    return 0;
}