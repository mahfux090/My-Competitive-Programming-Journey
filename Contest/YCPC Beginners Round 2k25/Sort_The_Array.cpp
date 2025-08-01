#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i=0;i<n;i++) 
    {
        cin>>a[i];
    }
    if (n==0) 
    {
        cout<<0<<endl;
        return;
    }
    vector<int>b;
    b.push_back(a[0]);
    for (int i=1; i<n;i++) 
    {
        if (a[i]!=b.back()) {
            b.push_back(a[i]);
        }
    }
    vector<int>tails;
    for (int num:b) 
    {
        auto it =upper_bound(tails.begin(),tails.end(), num);
        if (it ==tails.end()) {
            tails.push_back(num);
        } else {
            *it =num;
        }
    }
    cout <<b.size()-tails.size()<<endl;
}
int main() {
    int t;
    cin>>t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
