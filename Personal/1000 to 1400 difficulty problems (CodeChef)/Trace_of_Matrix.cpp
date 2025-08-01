#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T; cin>>T;
    while(T--)
    {
        int N; cin>>N;
        int A[101][101];
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
                cin>>A[i][j];

        int ans=0;
        for(int l=1;l<=N;l++)
        {
            for(int r=0;r<=N-l;r++)
            {
                for(int c=0;c<=N-l;c++)
                {
                    int trace=0;
                    for(int k=0;k<l;k++)
                        trace+=A[r+k][c+k];
                    if(trace>ans) ans=trace;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
