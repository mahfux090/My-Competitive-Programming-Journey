#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long> ans;
        for(int k=1;k<=18;k++){
            long long d=1;
            for(int i=0;i<k;i++) d*=10; 
            long long div=1+d;
            if(div>n) break;
            if(n%div==0) ans.push_back(n/div);
        }
        if(ans.empty()) cout<<0<<"\n";
        else{
            sort(ans.begin(),ans.end());
            cout<<ans.size()<<"\n";
            for(auto x:ans) cout<<x<<" ";
            cout<<"\n";
        }
    }
}
