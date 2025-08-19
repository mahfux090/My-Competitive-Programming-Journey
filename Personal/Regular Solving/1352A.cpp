#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v;
        int p=1;
        while(n){
            int d=n%10;
            if(d) v.push_back(d*p);
            n/=10;
            p*=10;
        }
        cout<<v.size()<<"\n";
        for(int x:v) cout<<x<<" ";
        cout<<"\n";
    }
}
