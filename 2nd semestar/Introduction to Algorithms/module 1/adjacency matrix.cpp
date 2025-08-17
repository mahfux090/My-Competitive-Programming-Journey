#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat[6][6];
    memset(mat, 0, sizeof(mat));
    mat[1][2]=1;
    mat[2][1]=1;
    mat[1][5]=1;
    mat[5][1]=1;
    mat[2][5]=1;
    mat[5][2]=1;
    mat[5][4]=1;
    mat[4][5]=1;
    mat[2][4]=1;
    mat[4][2]=1;
    mat[5][6]=1;
    mat[6][5]=1;
    mat[4][6]=1;
    mat[6][4]=1;
    mat[4][3]=1;
    mat[3][4]=1;
    mat[2][3]=1;
    mat[3][2]=1;

    for (int i = 1; i <=6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}