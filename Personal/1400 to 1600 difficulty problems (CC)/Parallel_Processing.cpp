#include<iostream>
using namespace std;
int arr[1001], types[1001];
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int N,H, Y1, Y2, L; cin>>N>>H>>Y1>>Y2>>L;
        int count=0;
        for(int i=0; i<N; i++) cin>>types[i]>>arr[i];
        for(int i=0; i<N; i++)
        {
            if(types[i]==1 && arr[i]<H-Y1)
                --L;
            else if(types[i]==2 && arr[i]>Y2)
                --L;
            if(L==0) break;
            ++count;
        }
        cout<<count<<"\n";
    }
    return 0;
}