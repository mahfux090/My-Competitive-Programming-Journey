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
        vector<int> A(N);
        for(int i=0;i<N;i++) cin>>A[i];
        for(int i=0;i+1<N;i++)
        {
            if(i%2==0 && A[i]>A[i+1]) swap(A[i],A[i+1]);
            else if(i%2==1 && A[i]<A[i+1]) swap(A[i],A[i+1]);
        }
        for(int i=0;i<N;i++) cout<<A[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
