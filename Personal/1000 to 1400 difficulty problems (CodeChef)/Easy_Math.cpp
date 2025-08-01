#include<bits/stdc++.h>
using namespace std;

int digit_sum(int x) {
    int s=0;
    while(x) {
        s+=x%10;
        x/=10;
    }
    return s;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[100];
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=0;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                int prod = a[i]*a[j];
                int s = digit_sum(prod);
                if(s>ans) ans=s;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
