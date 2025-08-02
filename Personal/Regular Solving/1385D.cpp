#include<bits/stdc++.h>

using namespace std;

int slv(string& s, int l, int r, char ch) {
    int n=r-l;
    if (n==1) {
        if(s[l]==ch) {
            return 0;
        }
        return 1;
    }

    int mid = l+n/2;
    int c1 = 0;
    for(int i = l; i<mid; ++i) {
        if(s[i] != ch) {
            c1++;
        }
    }
    int c2=0;
    for(int i=mid;i<r;++i) {
        if(s[i]!=ch) {
            c2++;
        }
    }

    int r1 = slv(s, mid,r,ch + 1);
    int r2 = slv(s,l,mid,ch+1);

    return min(c1+r1,c2+r2);
}

void sl() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << slv(s, 0, n, 'a') << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        sl();
    }
    return 0;
}

// Solved By Mahfuz Uddin