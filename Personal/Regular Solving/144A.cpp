#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    int maxH = *max_element(a.begin(),a.end());
    int minH = *min_element(a.begin(),a.end());
    
    int maxIdx = 0;
    for(int i=0;i<n;i++){
        if(a[i]==maxH){ maxIdx=i; break; }
    }
    
    int minIdx = n-1;
    for(int i=n-1;i>=0;i--){
        if(a[i]==minH){ minIdx=i; break; }
    }
    
    int ans = maxIdx + (n-1 - minIdx);
    if(maxIdx > minIdx) ans--;
    
    cout<<ans;
}
