#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int freq[10]={0};
    for (int i=1;i<=n; ++i)
    {
        long long val;
        cin>>val;
        freq[val%10]++;
        int med_pos=(i+1) /2;
        int count=0;
        int median= -1;
        for (int j=0;j<10; j++)
        {
            count+=freq[j];
            if (count>=med_pos)
            {
                median=j;
                break;
            }
        }
        cout <<median<< (i ==n ? "":" ");
    }
    cout<<endl;
}
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}