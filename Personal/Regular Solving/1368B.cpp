#include<bits/stdc++.h>

using namespace std;

int main() {
    long long k;
    cin>>k;
    long long a[10];
    for (int i=0; i < 10; ++i) {
        a[i] = 1;
    }
    string s = "codeforces";
    long long p = 1;
    int i = 0;

    while(p<k) {
        p /= a[i];
        a[i]++;
        p *= a[i];
        i++;
        if (i==10){
            i=0;
        }
    }

    for (int j = 0; j<10; ++j) {
        for (int l=0; l<a[j]; ++l) {
            cout<<s[j];
        }
    }
    cout<<endl;

    // Solved By Mahfuz Uddin
    return 0;
}