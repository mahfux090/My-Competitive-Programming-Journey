#include<bits/stdc++.h>

using namespace std;

void slv(){
    long long n, a, b;
    cin >> n >> a >> b;

    if (a == 1) {
        if((n-1)%b == 0) cout<<"Yes\n";
        else cout<<"No\n";
        return;
    }

    long long p=1;
    while(p<=n){
        if((n-p)%b==0){
            cout << "Yes\n";
            return;
        }
        p *= a;
    }

    cout<<"No\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        slv();
    }
// Solved By Mahfuz Uddin
}