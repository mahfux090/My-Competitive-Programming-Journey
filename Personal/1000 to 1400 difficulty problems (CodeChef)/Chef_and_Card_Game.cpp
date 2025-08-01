#include<bits/stdc++.h>
using namespace std;

int digit_sum(int x) {
    int s = 0;
    while(x) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ca = 0, cb = 0;
        while(n--) {
            int a, b;
            cin >> a >> b;
            int sa = digit_sum(a), sb = digit_sum(b);
            if(sa > sb) ca++;
            else if(sb > sa) cb++;
            else ca++, cb++;
        }
        if(ca > cb) cout << 0 << " " << ca << endl;
        else if(cb > ca) cout << 1 << " " << cb << endl;
        else cout << 2 << " " << ca << endl;
    }
    return 0;
}
