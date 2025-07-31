#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    long long l[n],g[n];
    for(int i=0; i<n; i++){
        cin>>l[i];
    }
    for(int i=0; i<n; i++){
        cin>>g[i];
    }
    bool front_ok=true;
    for(int i=0; i<n; i++){
        if(l[i]>g[i]){
            front_ok = false;
            break;
        }
    }
    bool back_ok = true;
    for(int i=0; i<n; i++){
        if(l[i]>g[n-1-i]){
            back_ok=false;
            break;
        }
    }
    if(front_ok && back_ok) cout<<"both\n";
    else if(front_ok) cout<<"front\n";
    else if(back_ok) cout<<"back\n";
    else cout<<"none\n";
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