#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y;
        long long N,R;
        cin>>X>>Y>>N>>R;
        long long max_premium = min(N, R/Y);
        long long premium = max_premium;
        long long normal = N - premium;
        long long cost = premium*Y + normal*X;
        if(cost > R)
        {
            long long diff = cost - R;
            long long needed = (diff + (Y - X) - 1) / (Y - X);
            premium -= needed;
            normal = N - premium;
            if(premium < 0) 
            {
                cout<<-1<<endl;
                continue;
            }
            cost = premium*Y + normal*X;
            if(cost > R)
            {
                cout<<-1<<endl;
                continue;
            }
        }
        cout<<normal<<" "<<premium<<endl;
    }
    return 0;
}
