#include<bits/stdc++.h>

using namespace std;

long long dsum(long long num) {
    long long sm = 0;
    while(num > 0) {
        sm += num % 10;
        num /= 10;
    }
    return sm;
}

void sl() {
    long long n;
    int s;
    cin >> n >> s;

    if (dsum(n) <= s) {
        cout<<0<<"\n";
        return;
    }

    long long p = 1;
    for (int i=0; i<18; ++i) {
        p*=10;
        long long next_n = ((n/p)+1)*p;
        if(dsum(next_n) <= s) {
            cout << next_n - n << "\n";
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while(t--) {
        sl();
    }
    return 0;
}

// Solved By Mahfuz Uddin