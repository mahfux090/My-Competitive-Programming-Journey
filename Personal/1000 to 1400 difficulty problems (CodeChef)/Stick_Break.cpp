#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,k;
        cin >> l >>k;
        if(l%k == 0){
            cout << 0 << endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}
// Solved By Mahfuz Uddin