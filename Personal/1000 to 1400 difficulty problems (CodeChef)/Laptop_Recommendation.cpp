#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int cnt[11]={0};
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        cnt[a]++;
    }
    int max_c = 0;
    int ans = -1;
    for(int i=1; i<=10; i++){
        if(cnt[i]>max_c){
            max_c=cnt[i];
            ans = i;
        }
    }
    int tie_c=0;
    for(int i=1;i<=10;i++){
        if(cnt[i]==max_c){
            tie_c++;
        }
    }
    if(tie_c > 1){
        cout<<"CONFUSED\n";
    }else{
        cout<<ans<<"\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
// Solved By Mahfuz Uddin