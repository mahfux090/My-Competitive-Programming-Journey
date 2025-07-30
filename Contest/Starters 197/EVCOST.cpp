#include<bits/stdc++.h>
using namespace std;
void f(){
    int n;
    cin>> n;
    vector<long long> a(n), b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    long double l=0.0, h=4e11;
    for(int i=0;i<100;i++){
        long double m=l+(h-l)/2.0;
        long double s=0.0;
        long double en=0.0;
        for(int j=n-1; j>=0;j--){
            long double ec = min((long double)a[j]+en, (long double)b[j]+m);
            s+=ec;
            en=ec;
        }
        if(m*(n+1.0)<s){
            l=m;
        }else{
            h=m;
        }
    }
    long double c = l;
    long double en = 0.0;
    for(int i=n-1; i>=0; --i){
        long double ec = min((long double)a[i]+en, (long double)b[i]+c);
        en=ec;
    }
    cout<<fixed<<setprecision(10)<<en<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while(t--){
        f();
    }
}
// Solved By Mahfuz Uddin