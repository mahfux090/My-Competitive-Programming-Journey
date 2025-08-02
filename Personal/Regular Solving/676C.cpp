#include<bits/stdc++.h>

using namespace std;

int f(int n, int k, string s, char c) {
    int l=0;
    int cnt=0, mx=0;
    for (int r=0; r < n; ++r) {
        if(s[r]!=c) {
            cnt++;
        }
        while(cnt>k) {
            if(s[l]!=c) {
                cnt--;
            }
            l++;
        }
        mx = max(mx, r-l + 1);
    }
    return mx;
}

void sl() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int ans1 = f(n,k,s,'a');
    int ans2 = f(n,k,s,'b');

    cout << max(ans1, ans2) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sl();
    return 0;
}

// Solved By Mahfuz Uddin