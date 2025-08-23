#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    int total=0;
    for(int i=0;i<n;i++){cin>>a[i]; total+=a[i];}
    sort(a.rbegin(),a.rend());
    int my=0,cnt=0;
    for(int x:a){
        my+=x;
        cnt++;
        if(my>total-my){cout<<cnt; return 0;}
    }
}
