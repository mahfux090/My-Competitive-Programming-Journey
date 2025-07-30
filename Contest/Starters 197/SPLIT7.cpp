#include<bits/stdc++.h>
using namespace std;

bool chk(int x, int n, int k, string s){
    if(x==0) return true;
    int c = 0;
    int l0=0;
    int l1=0;
    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            l0++;
        }
        else{
            l1=max(l0, l1)+1;
        }
        if(max(l0,l1)>=x){
            c++;
            l0 = 0;
            l1=0;
        }
    }
    return c>=k;
}

void slv(){
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;

    int l=0, h=n, ans=0;
    while(l <= h){
        int m=l+(h-l)/2;
        if(chk(m,n,k,s)){
            ans = m;
            l = m+1;
        }
        else{
            h=m-1;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        slv();
    }
    return 0;
}

// Solved By Mahfuz Uddin