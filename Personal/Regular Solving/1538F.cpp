#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l, r;
        cin >>l>>r;
        int ra=0;
        int la=0;
        int tr=r;
        int tl=l;
        while(tr>0){
            ra+=tr;
            tr/=10;
        }
        while(tl>0){
            la+=tl;
            tl/=10;
        }
        cout<<ra-la<<endl;
    }
    return 0;
}
// Solved By Mahfuz Uddin