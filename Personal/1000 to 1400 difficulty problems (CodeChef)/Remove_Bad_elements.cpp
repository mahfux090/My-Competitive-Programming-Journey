#include<bits/stdc++.h>
using namespace std;
void run(){
    int n;
    cin>>n;
    map<int, int> mp;
    int mx= 0;
    for(int i=0; i<n; i++){
        int a;
        cin >>a;
        mp[a]++;
        if(mp[a]>mx){
            mx = mp[a];
        }
    }
    cout<< n - mx << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        run();
    }
    // Solved By Mahfuz Uddin
}