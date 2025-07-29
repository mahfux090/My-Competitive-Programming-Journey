#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    while (t--) {
        long long n, m;
        cin>>n>>m;
        long long total_dist = 0;
        for (int i=0; i<n; i++) {
            long long a;
            cin >> a;
            long long dist1 = a - 1;
            long long dist2 = m - a;
            if (dist1 > dist2) {
                total_dist += dist1;
            } else {
                total_dist += dist2;
            }
        }
        cout<<total_dist<<endl;
    }
    return 0;
}
// Solved By Mahfuz Uddin