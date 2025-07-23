// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int c[5]={0};
    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        c[s]++;
    }
    int ans=0;
    ans+=c[4];
    ans+=c[3];
    c[1]=max(0,c[1]-c[3]);
    int rem_p = c[2]*2 + c[1];
    ans+=(rem_p+3)/4;
    cout<<ans<<endl;
    // Solved By Mahfuz Uddin
    // 2025-07-23 18:54:00
    return 0;
}