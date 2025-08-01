#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    for(int i=0;i<4;i++) cin>>a[i];
    sort(a,a+4);
    do {
        if(a[0]*a[3]==a[1]*a[2]) {
            cout<<"Possible";
            return 0;
        }
    } while(next_permutation(a,a+4));
    cout<<"Impossible";
    return 0;
}
